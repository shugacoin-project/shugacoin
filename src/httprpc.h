// Copyright (c) 2015-2017 The Bitcoin Core developers
// Copyright (c) 2018-2020 The Sugarchain Yumekawa developers
// Copyright (c) 2024 The Shugacoin Azula developers

#ifndef BITCOIN_HTTPRPC_H
#define BITCOIN_HTTPRPC_H

#include <string>
#include <map>

/** Start HTTP RPC subsystem.
 * Precondition; HTTP and RPC has been started.
 */
bool StartHTTPRPC();
/** Interrupt HTTP RPC subsystem.
 */
void InterruptHTTPRPC();
/** Stop HTTP RPC subsystem.
 * Precondition; HTTP and RPC has been stopped.
 */
void StopHTTPRPC();

/** Start HTTP REST subsystem.
 * Precondition; HTTP and RPC has been started.
 */
bool StartREST();
/** Interrupt RPC REST subsystem.
 */
void InterruptREST();
/** Stop HTTP REST subsystem.
 * Precondition; HTTP and RPC has been stopped.
 */
void StopREST();

#endif
