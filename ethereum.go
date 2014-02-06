package main

import (
	"encoding/hex"
	"flag"
	"fmt"
	"github.com/ethereum/eth-go"
	"github.com/ethereum/ethchain-go"
	"github.com/ethereum/ethutil-go"
	_ "github.com/ethereum/ethwire-go"
	"log"
	"os"
	"os/signal"
	"runtime"
)

const Debug = true

var StartConsole bool
var StartMining bool
var UseUPnP bool
var OutboundPort string

func Init() {
	flag.BoolVar(&StartConsole, "c", false, "debug and testing console")
	flag.BoolVar(&StartMining, "m", false, "start dagger mining")
	flag.BoolVar(&UseUPnP, "upnp", false, "enable UPnP support")
	flag.StringVar(&OutboundPort, "port", "30303", "listening port")

	flag.Parse()
}

// Register interrupt handlers so we can stop the ethereum
func RegisterInterupts(s *eth.Ethereum) {
	// Buffered chan of one is enough
	c := make(chan os.Signal, 1)
	// Notify about interrupts for now
	signal.Notify(c, os.Interrupt)
	go func() {
		for sig := range c {
			fmt.Printf("Shutting down (%v) ... \n", sig)

			s.Stop()
		}
	}()
}

func main() {
	runtime.GOMAXPROCS(runtime.NumCPU())
	Init()

	ethchain.InitFees()
	ethutil.ReadConfig()

	log.Printf("Starting Ethereum v%s\n", ethutil.Config.Ver)

	// Instantiated a eth stack
	ethereum, err := eth.New(eth.CapDefault, UseUPnP)
	if err != nil {
		log.Println(err)
		return
	}

	if StartConsole {
		err := os.Mkdir(ethutil.Config.ExecPath, os.ModePerm)
		// Error is OK if the error is ErrExist
		if err != nil && !os.IsExist(err) {
			log.Panic("Unable to create EXECPATH:", err)
		}

		console := NewConsole(ethereum)
		go console.Start()
	}

	RegisterInterupts(ethereum)

	ethereum.Start()

	if StartMining {
		log.Printf("Dev Test Mining started...\n")

		// Fake block mining. It broadcasts a new block every 5 seconds
		go func() {
			pow := &ethchain.EasyPow{}
			addr, _ := hex.DecodeString("82c3b0b72cf62f1a9ce97c64da8072efa28225d8")

			for {
				txs := ethereum.TxPool.Flush()
				// Create a new block which we're going to mine
				block := ethereum.BlockManager.BlockChain().NewBlock(addr, txs)
				// Apply all transactions to the block
				ethereum.BlockManager.ApplyTransactions(block, block.Transactions())
				// Search the nonce
				block.Nonce = pow.Search(block)
				err := ethereum.BlockManager.ProcessBlock(block)
				if err != nil {
					log.Println(err)
				} else {
					//ethereum.Broadcast(ethwire.MsgBlockTy, []interface{}{block.RlpValue().Value})
					log.Println("\n+++++++ MINED BLK +++++++\n", block.String())
				}
			}
		}()
	}

	// Wait for shutdown
	ethereum.WaitForShutdown()
}
