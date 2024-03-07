# configuration shugacoin.conf
server=1

rpcuser=(username)

rpcpassword=(password)

rpcallowip=127.0.0.1

#adding node
addnode=103.37.125.17

# SOLO mining
cpuminer -a yespower -o http://localhost:40002 --no-longpoll -u x -p x --coinbase-addr=your wallet
