// Copyright (c) 2015-2017 The Bitcoin Core developers
// Copyright (c) 2018-2020 The Sugarchain Yumekawa developers
// Copyright (c) 2024 The Shugacoin Azula developers

#include <bench/bench.h>
#include <validation.h>
#include <utiltime.h>

// Sanity test: this should loop ten times, and
// min/max/average should be close to 7ms. (was 100ms)
static void Sleep7ms(benchmark::State& state)
{
    while (state.KeepRunning()) {
        MilliSleep(7);
    }
}

BENCHMARK(Sleep7ms, 10);

// Extremely fast-running benchmark:
#include <math.h>

volatile double sum = 0.0; // volatile, global so not optimized away

static void Trig(benchmark::State& state)
{
    double d = 0.01;
    while (state.KeepRunning()) {
        sum += sin(d);
        d += 0.000001;
    }
}

BENCHMARK(Trig, 12 * 1000 * 1000);
