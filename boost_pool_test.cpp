#include <map>
#include <set>
#include <iostream>
#include <list>

#include <boost/pool/pool.hpp>
#include <boost/pool/pool_alloc.hpp>

#include <x86intrin.h>
// optional wrapper if you don't want to just use __rdtsc() everywhere
inline unsigned long long readTSC() {
  // _mm_lfence();  // optionally wait for earlier insns to retire before reading the clock
  return __rdtsc();
  // _mm_lfence();  // optionally block later instructions until rdtsc retires
}
using rdtsc_type = decltype(readTSC());

template<typename M>
void test() {
    auto before = readTSC();
    M& x = * (new M);
    for (size_t i = 0; i < 100000; ++i) {
        x.push_back(i);
    }
    auto after = readTSC();
    std::cout << after - before << std::endl;
}

int main() {
    test<std::list<int32_t>>();
    test<std::set<int32_t, std::less<int32_t>, boost::fast_pool_allocator<int32_t, boost::default_user_allocator_new_delete, boost::details::pool::null_mutex, 1024, 1024>>>();
    test<std::set<int64_t>>();
    test<std::set<int64_t, std::less<int64_t>, boost::fast_pool_allocator<int64_t, boost::default_user_allocator_new_delete, boost::details::pool::null_mutex, 1024, 1024>>>();
    test<std::set<int32_t>>();
    test<std::set<int32_t, std::less<int32_t>, boost::fast_pool_allocator<int32_t, boost::default_user_allocator_new_delete, boost::details::pool::null_mutex, 1024, 1024>>>();
    test<std::set<int64_t>>();
    test<std::set<int64_t, std::less<int64_t>, boost::fast_pool_allocator<int64_t, boost::default_user_allocator_new_delete, boost::details::pool::null_mutex, 1024, 1024>>>();
}