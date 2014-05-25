package ethminer

import (
	"bytes"
	"github.com/ethereum/eth-go/ethchain"
	"github.com/ethereum/eth-go/ethutil"
	"github.com/ethereum/eth-go/ethwire"
)

type Miner struct {
	pow         ethchain.PoW
	ethereum    ethchain.EthManager
	coinbase    []byte
	reactChan   chan ethutil.React
	txs         []*ethchain.Transaction
	uncles      []*ethchain.Block
	block       *ethchain.Block
	powChan     chan []byte
	powQuitChan chan ethutil.React
	quitChan    chan bool
}

func NewDefaultMiner(coinbase []byte, ethereum ethchain.EthManager) Miner {
	reactChan := make(chan ethutil.React, 1)   // This is the channel that receives 'updates' when ever a new transaction or block comes in
	powChan := make(chan []byte, 1)            // This is the channel that receives valid sha hases for a given block
	powQuitChan := make(chan ethutil.React, 1) // This is the channel that can exit the miner thread

	ethereum.Reactor().Subscribe("newBlock", reactChan)
	ethereum.Reactor().Subscribe("newTx:pre", reactChan)

	// We need the quit chan to be a Reactor event.
	// The POW search method is actually blocking and if we don't
	// listen to the reactor events inside of the pow itself
	// The miner overseer will never get the reactor events themselves
	// Only after the miner will find the sha
	ethereum.Reactor().Subscribe("newBlock", powQuitChan)
	ethereum.Reactor().Subscribe("newTx:pre", powQuitChan)

	miner := Miner{
		pow:         &ethchain.EasyPow{},
		ethereum:    ethereum,
		coinbase:    coinbase,
		reactChan:   reactChan,
		powChan:     powChan,
		powQuitChan: powQuitChan,
		quitChan:    make(chan bool),
	}

	// Insert initial TXs in our little miner 'pool'
	miner.txs = ethereum.TxPool().Flush()
	miner.block = ethereum.BlockChain().NewBlock(miner.coinbase)

	return miner
}
func (miner *Miner) Start() {
	// Prepare inital block
	//miner.ethereum.StateManager().Prepare(miner.block.State(), miner.block.State())
	go miner.listener()
}
func (miner *Miner) listener() {
out:
	for {
		select {
		case <-miner.quitChan:
			break out
		case chanMessage := <-miner.reactChan:
			if block, ok := chanMessage.Resource.(*ethchain.Block); ok {
				//ethutil.Config.Log.Infoln("[MINER] Got new block via Reactor")
				if bytes.Compare(miner.ethereum.BlockChain().CurrentBlock.Hash(), block.Hash()) == 0 {
					// TODO: Perhaps continue mining to get some uncle rewards
					//ethutil.Config.Log.Infoln("[MINER] New top block found resetting state")

					// Filter out which Transactions we have that were not in this block
					var newtxs []*ethchain.Transaction
					for _, tx := range miner.txs {
						found := false
						for _, othertx := range block.Transactions() {
							if bytes.Compare(tx.Hash(), othertx.Hash()) == 0 {
								found = true
							}
						}
						if found == false {
							newtxs = append(newtxs, tx)
						}
					}
					miner.txs = newtxs

					// Setup a fresh state to mine on
					//miner.block = miner.ethereum.BlockChain().NewBlock(miner.coinbase, miner.txs)

				} else {
					if bytes.Compare(block.PrevHash, miner.ethereum.BlockChain().CurrentBlock.PrevHash) == 0 {
						ethutil.Config.Log.Infoln("[MINER] Adding uncle block")
						miner.uncles = append(miner.uncles, block)
					}
				}
			}

			if tx, ok := chanMessage.Resource.(*ethchain.Transaction); ok {
				found := false
				for _, ctx := range miner.txs {
					if found = bytes.Compare(ctx.Hash(), tx.Hash()) == 0; found {
						break
					}

				}
				if found == false {
					// Undo all previous commits
					miner.block.Undo()
					// Apply new transactions
					miner.txs = append(miner.txs, tx)
				}
			}
		default:
			miner.mineNewBlock()
		}
	}
}

func (self *Miner) Stop() {
	self.powQuitChan <- ethutil.React{}
	self.quitChan <- true
}

func (self *Miner) mineNewBlock() {
	stateManager := self.ethereum.StateManager()

	self.block = self.ethereum.BlockChain().NewBlock(self.coinbase)

	// Apply uncles
	if len(self.uncles) > 0 {
		self.block.SetUncles(self.uncles)
	}

	// Accumulate all valid transaction and apply them to the new state
	receipts, txs := stateManager.ApplyTransactions(self.block.State(), self.block, self.txs)
	self.txs = txs
	// Set the transactions to the block so the new SHA3 can be calculated
	self.block.SetReceipts(receipts, txs)
	// Accumulate the rewards included for this block
	stateManager.AccumelateRewards(self.block.State(), self.block)

	ethutil.Config.Log.Infoln("[MINER] Mining on block. Includes", len(self.txs), "transactions")

	// Find a valid nonce
	self.block.Nonce = self.pow.Search(self.block, self.powQuitChan)
	if self.block.Nonce != nil {
		err := self.ethereum.StateManager().Process(self.block, true)
		if err != nil {
			ethutil.Config.Log.Infoln(err)
		} else {
			self.ethereum.Broadcast(ethwire.MsgBlockTy, []interface{}{self.block.Value().Val})
			ethutil.Config.Log.Infof("[MINER] 🔨  Mined block %x\n", self.block.Hash())
			// Gather the new batch of transactions currently in the tx pool
			self.txs = self.ethereum.TxPool().CurrentTransactions()
		}
	}
}
