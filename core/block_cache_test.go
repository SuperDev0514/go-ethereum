package core

import (
	"math/big"
	"testing"

	"github.com/ethereum/go-ethereum/common"
	"github.com/ethereum/go-ethereum/core/types"
)

func newChain(size int) (chain []*types.Block) {
	var parentHash common.Hash
	for i := 0; i < size; i++ {
		block := types.NewBlock(parentHash, common.Address{}, common.Hash{}, new(big.Int), 0, "")
		block.Header().Number = big.NewInt(int64(i))
		chain = append(chain, block)
		parentHash = block.Hash()
	}
	return
}

func insertChainCache(cache *BlockCache, chain []*types.Block) {
	for _, block := range chain {
		cache.Push(block)
	}
}

func TestNewBlockCache(t *testing.T) {
	chain := newChain(3)
	cache := NewBlockCache(2)
	insertChainCache(cache, chain)

	if cache.hashes[0] != chain[1].Hash() {
		t.Error("oldest block incorrect")
	}
}

func TestInclusion(t *testing.T) {
	chain := newChain(3)
	cache := NewBlockCache(3)
	insertChainCache(cache, chain)

	for _, block := range chain {
		if b := cache.Get(block.Hash()); b == nil {
			t.Errorf("getting %x failed", block.Hash())
		}
	}
}
