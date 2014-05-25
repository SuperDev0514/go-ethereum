package main

import (
	"fmt"
	"github.com/ethereum/eth-go"
	"github.com/ethereum/eth-go/ethchain"
	"github.com/ethereum/eth-go/ethpub"
	"github.com/ethereum/eth-go/ethutil"
	"github.com/ethereum/go-ethereum/utils"
	"github.com/obscuren/otto"
	"io/ioutil"
	"os"
	"path/filepath"
)

type JSRE struct {
	ethereum *eth.Ethereum
	vm       *otto.Otto
	lib      *ethpub.PEthereum

	blockChan  chan ethutil.React
	changeChan chan ethutil.React
	quitChan   chan bool

	objectCb map[string][]otto.Value
}

func NewJSRE(ethereum *eth.Ethereum) *JSRE {
	re := &JSRE{
		ethereum,
		otto.New(),
		ethpub.NewPEthereum(ethereum),
		make(chan ethutil.React, 1),
		make(chan ethutil.React, 1),
		make(chan bool),
		make(map[string][]otto.Value),
	}

	// Init the JS lib
	re.vm.Run(jsLib)

	// We have to make sure that, whoever calls this, calls "Stop"
	go re.mainLoop()

	re.Bind("eth", &JSEthereum{re.lib, re.vm})

	re.initStdFuncs()

	return re
}

func (self *JSRE) Bind(name string, v interface{}) {
	self.vm.Set(name, v)
}

func (self *JSRE) Run(code string) (otto.Value, error) {
	return self.vm.Run(code)
}

func (self *JSRE) Require(file string) error {
	if len(filepath.Ext(file)) == 0 {
		file += ".js"
	}

	fh, err := os.Open(file)
	if err != nil {
		return err
	}

	content, _ := ioutil.ReadAll(fh)
	self.Run("exports = {};(function() {" + string(content) + "})();")

	return nil
}

func (self *JSRE) Stop() {
	// Kill the main loop
	self.quitChan <- true

	close(self.blockChan)
	close(self.quitChan)
	close(self.changeChan)
}

func (self *JSRE) mainLoop() {
	// Subscribe to events
	reactor := self.ethereum.Reactor()
	reactor.Subscribe("newBlock", self.blockChan)

out:
	for {
		select {
		case <-self.quitChan:
			break out
		case block := <-self.blockChan:
			if _, ok := block.Resource.(*ethchain.Block); ok {
			}
		case object := <-self.changeChan:
			if stateObject, ok := object.Resource.(*ethchain.StateObject); ok {
				for _, cb := range self.objectCb[ethutil.Hex(stateObject.Address())] {
					val, _ := self.vm.ToValue(ethpub.NewPStateObject(stateObject))
					cb.Call(cb, val)
				}
			} else if storageObject, ok := object.Resource.(*ethchain.StorageState); ok {
				for _, cb := range self.objectCb[ethutil.Hex(storageObject.StateAddress)+ethutil.Hex(storageObject.Address)] {
					val, _ := self.vm.ToValue(ethpub.NewPStorageState(storageObject))
					cb.Call(cb, val)
				}
			}
		}
	}
}

func (self *JSRE) initStdFuncs() {
	t, _ := self.vm.Get("eth")
	eth := t.Object()
	eth.Set("watch", self.watch)
	eth.Set("addPeer", self.addPeer)
	eth.Set("require", self.require)
	eth.Set("stopMining", self.stopMining)
	eth.Set("startMining", self.startMining)
}

/*
 * The following methods are natively implemented javascript functions
 */

func (self *JSRE) stopMining(call otto.FunctionCall) otto.Value {
	v, _ := self.vm.ToValue(utils.StopMining(self.ethereum))
	return v
}

func (self *JSRE) startMining(call otto.FunctionCall) otto.Value {
	v, _ := self.vm.ToValue(utils.StartMining(self.ethereum))
	return v
}

// eth.watch
func (self *JSRE) watch(call otto.FunctionCall) otto.Value {
	addr, _ := call.Argument(0).ToString()
	var storageAddr string
	var cb otto.Value
	var storageCallback bool
	if len(call.ArgumentList) > 2 {
		storageCallback = true
		storageAddr, _ = call.Argument(1).ToString()
		cb = call.Argument(2)
	} else {
		cb = call.Argument(1)
	}

	if storageCallback {
		self.objectCb[addr+storageAddr] = append(self.objectCb[addr+storageAddr], cb)

		event := "storage:" + string(ethutil.FromHex(addr)) + ":" + string(ethutil.FromHex(storageAddr))
		self.ethereum.Reactor().Subscribe(event, self.changeChan)
	} else {
		self.objectCb[addr] = append(self.objectCb[addr], cb)

		event := "object:" + string(ethutil.FromHex(addr))
		self.ethereum.Reactor().Subscribe(event, self.changeChan)
	}

	return otto.UndefinedValue()
}

func (self *JSRE) addPeer(call otto.FunctionCall) otto.Value {
	host, err := call.Argument(0).ToString()
	if err != nil {
		return otto.FalseValue()
	}
	self.ethereum.ConnectToPeer(host)

	return otto.TrueValue()
}

func (self *JSRE) require(call otto.FunctionCall) otto.Value {
	file, err := call.Argument(0).ToString()
	if err != nil {
		return otto.UndefinedValue()
	}
	if err := self.Require(file); err != nil {
		fmt.Println("err:", err)
		return otto.UndefinedValue()
	}

	t, _ := self.vm.Get("exports")

	return t
}
