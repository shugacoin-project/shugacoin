Shugacoin Azula
===================
![GitHub All Releases](https://img.shields.io/github/downloads/shugacoin-project/shugacoin/total)

https://shugacoin.org

License
-------
Shugacoin Azula is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.
- Copyright (c) 2009-2010 Satoshi Nakamoto
- Copyright (c) 2009-2018 The Bitcoin Core developers
- Copyright (c) 2013-2019 Alexander Peslyak - Yespower 1.0.1
- Copyright (c) 2016-2018 The Zcash developers - DigiShieldZEC
- Copyright (c) 2018-2020 The Sugarchain Yumekawa developers
- Copyright (c) 2024 The Shugacoin Azula developers


Minimum Requirement
-------------------
- CPU: 1 Core
- RAM: 2048 MB (at least 3 GB [swap](https://github.com/shugacoin-project/shugacoin/blob/main/doc/swap.md))
- DISK: HDD 5 GB


Depends on Bitcoin Core
-----------------------
Exactly the same as dependencies of [Bitcoin Core v0.16.3](https://github.com/bitcoin/bitcoin/tree/49e34e288005a5b144a642e197b628396f5a0765).

- Ubuntu 20.04 (Recommended, No PPA)
```bash
sudo apt-get install -y \
software-properties-common build-essential libtool autotools-dev automake pkg-config \
libssl-dev libevent-dev bsdmainutils libboost-all-dev \
libminiupnpc-dev libzmq3-dev libqt5gui5 libqt5core5a \
libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev \
protobuf-compiler libqrencode-dev help2man
```

- PPA is *only* for Ubuntu. No `libdb4.8-dev` and `libdb4.8++-dev` packages on Debian.

- <details><summary>Old Ubuntu</summary>

  * Ubuntu 18.04+
  ```bash
  sudo add-apt-repository -y ppa:luke-jr/bitcoincore && \
  sudo apt-get update && \
  sudo apt-get install -y \
  libdb4.8-dev libdb4.8++-dev \
  software-properties-common build-essential libtool autotools-dev automake pkg-config \
  libssl-dev libevent-dev bsdmainutils libboost-all-dev \
  libminiupnpc-dev libzmq3-dev libqt5gui5 libqt5core5a \
  libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev \
  protobuf-compiler libqrencode-dev help2man
  ```
</details>


Build
-----
- Ubuntu 20.04 (Recommended, No PPA)
```bash
./autogen.sh && \
./contrib/install_db4.sh `pwd` && \
export BDB_PREFIX=$PWD/db4 && \
./configure BDB_LIBS="-L${BDB_PREFIX}/lib -ldb_cxx-4.8" BDB_CFLAGS="-I${BDB_PREFIX}/include" && \
make -j$(nproc) && \
make check -j$(nproc)
```

- (optional) Following can be deleted `rm -rf db4/ && rm -f db-4.8.30.NC.tar.gz`

Options after Build
-------------------
- (optional) Reduce binary size using strip (about 90% file size reduction)
```bash
strip ./src/shugacoin-cli && \
strip ./src/shugacoind && \
strip ./src/qt/shugacoin-qt && \
strip ./src/shugacoin-tx && \
strip ./src/test/test_shugacoin
```

- (optional) After bump version on `configure.ac`, update binary docs (manpages) using help2man `.1` files
```bash
make -j$(nproc) && ./contrib/devtools/gen-manpages.sh
```

- (optional) build for Windows and OSX you may need `--disable-shared` option with make.

- (optional) Add seeds/nodes from [DNSSEED](https://github.com/shugacoin-project/shugacoin-seeder)  
  https://github.com/shugacoin-project/shugacoin/tree/main/contrib/seeds


Run
---
The options `-rpcuser`, `-rpcpassword`, and `-printtoconsole` are optional. `server=1` needed by RPC servers or cpuminer when solo-mining.

- Mainnet: debug mode: `net` for Network
  > ./src/qt/shugacoin-qt -server=1 -rpcuser=rpcuser -rpcpassword=rpcpassword **-debug=net** -printtoconsole

- Testnet
  > ./src/qt/shugacoin-qt **-testnet**

- Regtest
  > ./src/qt/shugacoin-qt **-regtest**

- Reference  
  https://en.bitcoin.it/w/index.php?title=Running_Bitcoin&oldid=66644


CLI
---
- `-prunedebuglogfile`: Prune (limit) filesize of debug.log
  > ./src/qt/shugacoin-qt -prunedebuglogfile

  > 2020-09-15 19:41:34 DEBUG.LOG PRUNED at 10000063

