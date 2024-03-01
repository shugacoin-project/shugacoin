// Copyright (c) 2015-2017 The Bitcoin Core developers
// Copyright (c) 2018-2020 The Sugarchain Yumekawa developers
// Copyright (c) 2024 The Shugacoin Azula developers

#include <bench/bench.h>
#include <prevector.h>

static void PrevectorDestructor(benchmark::State& state)
{
    while (state.KeepRunning()) {
        for (auto x = 0; x < 1000; ++x) {
            prevector<28, unsigned char> t0;
            prevector<28, unsigned char> t1;
            t0.resize(28);
            t1.resize(29);
        }
    }
}

static void PrevectorClear(benchmark::State& state)
{

    while (state.KeepRunning()) {
        for (auto x = 0; x < 1000; ++x) {
            prevector<28, unsigned char> t0;
            prevector<28, unsigned char> t1;
            t0.resize(28);
            t0.clear();
            t1.resize(29);
            t0.clear();
        }
    }
}

BENCHMARK(PrevectorDestructor, 5700);
BENCHMARK(PrevectorClear, 5600);
