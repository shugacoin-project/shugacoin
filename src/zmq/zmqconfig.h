// Copyright (c) 2014-2017 The Bitcoin Core developers
// Copyright (c) 2018-2020 The Sugarchain Yumekawa developers
// Copyright (c) 2024 The Shugacoin Azula developers

#ifndef BITCOIN_ZMQ_ZMQCONFIG_H
#define BITCOIN_ZMQ_ZMQCONFIG_H

#if defined(HAVE_CONFIG_H)
#include <config/bitcoin-config.h>
#endif

#include <stdarg.h>
#include <string>

#if ENABLE_ZMQ
#include <zmq.h>
#endif

#include <primitives/block.h>
#include <primitives/transaction.h>

void zmqError(const char *str);

#endif // BITCOIN_ZMQ_ZMQCONFIG_H
