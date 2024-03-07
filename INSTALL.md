Building Shugacoin
================

Minimum Requirement
-------------------
- CPU: 1 Core
- RAM: 2048 MB (at least 3 GB [swap](https://github.com/shugacoin-project/shugacoin/blob/main/doc/swap.md))
- DISK: HDD 25 GB

Depends on Shugacoin Core
-----------------------
- Ubuntu 20.04 (Recommended, No PPA)
```bash
sudo apt-get install -y \
software-properties-common build-essential libtool autotools-dev automake pkg-config \
libssl-dev libevent-dev bsdmainutils libboost-all-dev \
libminiupnpc-dev libzmq3-dev libqt5gui5 libqt5core5a \
libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev \
protobuf-compiler libqrencode-dev help2man
```

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
