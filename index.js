var web3 = require('./lib/main');
web3.providers.WebSocketProvider = require('./lib/websocket');
web3.providers.HttpRpcProvider = require('./lib/httprpc');
web3.providers.QtProvider = require('./lib/qt');
web3.providers.AutoProvider = require('./lib/autoprovider');
web3.abi = require('./lib/abi');

module.exports = web3;
