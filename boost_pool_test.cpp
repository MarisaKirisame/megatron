#include <map>
#include <set>
#include <iostream>
#include <list>
#include <random>

#define BOOST_POOL_NO_MT
#include <boost/pool/pool.hpp>
#include <boost/pool/pool_alloc.hpp>

#include "otto.h"

#include <x86intrin.h>
// optional wrapper if you don't want to just use __rdtsc() everywhere
inline unsigned long long readTSC() {
  // _mm_lfence();  // optionally wait for earlier insns to retire before reading the clock
  return __rdtsc();
  // _mm_lfence();  // optionally block later instructions until rdtsc retires
}
using rdtsc_type = decltype(readTSC());

//using default_allocator = boost::fast_pool_allocator<T, boost::default_user_allocator_new_delete, boost::details::pool::null_mutex, 1024, 1024>;

std::random_device rd;
std::mt19937_64 gen(rd());

template<template <typename> typename Allocator>
void test() {
    auto before = readTSC();
    using too = total_order<1.4, uint64_t, Allocator>;
    for (size_t i = 0; i < 100; ++i) {
        too& to = *new too();
        std::vector<typename too::node>& nodes = *new std::vector<typename too::node>();
        nodes.push_back(to.smallest());
        for (size_t j = 0; j < 1000000; ++j) {
            nodes.push_back(to.insert(nodes[std::uniform_int_distribution<size_t>(0, nodes.size() - 1)(gen)]));
        }
    }
    auto after = readTSC();
    std::cout << after - before << std::endl;
}

template<typename T>
using fast_pool_allocator = boost::fast_pool_allocator<T>;

int main() {
    test<std::allocator>();
    test<fast_pool_allocator>();
    test<std::allocator>();
    test<fast_pool_allocator>();
}