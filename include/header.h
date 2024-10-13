#pragma once
#include <cassert>
#include <cstddef>
#include <fstream>
#include <iostream>
#include <sstream>
#include <memory>
#include <nlohmann/json.hpp>
#include <optional>
#include <string>
#include <unordered_map>
#include <variant>
#include <boost/predef.h>
using json = nlohmann::json;

struct Unit {};
struct Metric {
  int64_t read_count = 0;
  int64_t write_count = 0;
  int64_t input_change_count = 0;
  int64_t output_change_count = 0;
  int64_t queue_size_acc = 0;
  int64_t meta_read_count = 0;
  int64_t meta_write_count = 0;
  int64_t eval_time = 0;
  int64_t overhead_time = 0;
  int64_t overhead_l2m = 0;
} m;
Unit ResetMetric() {
  m = Metric{};
  return Unit{};
}
int64_t FreshMetric() { return 0; }
Unit WriteMetric() {
  m.write_count += 1;
  return Unit{};
}
Unit MetaWriteMetric() {
  m.meta_write_count += 1;
  return Unit{};
}
Unit MetaReadMetric() {
  m.meta_read_count += 1;
  return Unit{};
}
Unit InputChangeMetric(int64_t i) {
  m.input_change_count += i;
  return Unit{};
}
Unit OutputChangeMetric(int64_t i) {
  m.output_change_count += i;
  return Unit{};
}
Unit MetricQueueSize(int64_t i) {
  m.queue_size_acc += i;
  return Unit{};
}
int64_t MetricQueueSizeAcc() { return m.queue_size_acc; }
int64_t MetricMetaWriteCount() { return m.meta_write_count; }
int64_t MetricWriteCount() { return m.write_count; }
int64_t MetricReadCount() { return m.read_count; }
int64_t MetricMetaReadCount() { return m.meta_read_count; }
int64_t MetricOutputChangeCount() { return m.output_change_count; }
int64_t MetricInputChangeCount() { return m.input_change_count; }
int64_t MetricEvalCount() { return m.eval_time; }
int64_t MetricOverheadTime() { return m.overhead_time; }
int64_t MetricOverheadL2m() { return m.overhead_l2m; }
Unit MetricRecordEval(int64_t i) {
  m.eval_time += i;
  return Unit{};
}
Unit MetricRecordOverheadTime(int64_t i) {
  m.overhead_time += i;
  return Unit{};
}
Unit MetricRecordOverheadL2m(int64_t i) {
  m.overhead_l2m += i;
  return Unit{};
}
[[noreturn]] void Panic() { assert(false); throw; }
void PrintEndline(const std::string &str) { std::cout << str << std::endl; }
Unit MakeUnit() { return Unit{}; }
template <typename T> struct RefNode {
  T t;
  RefNode(const T &t) : t(t) {}
};
template <typename T> using Ref = std::shared_ptr<RefNode<T>>;
template <typename T> Ref<T> MakeRef(const T &t) { return std::make_shared<RefNode<T>>(t); }
template <typename T> T ReadRef(const Ref<T> &r) { return r->t; }
template <typename T> Unit WriteRef(Ref<T> &r, const T &t) {
  r->t = t;
  return Unit{};
}
// we dont need to output command
Unit MakeStack() { return Unit{}; }
Unit ClearStack(Unit) { return Unit{}; }
Unit PushStack(Unit, const auto &) { return Unit{}; }
std::string StackToList(Unit) { return ""; }
json FreshJson() { return json(); }
void WriteJson(json &j, const std::string &name, const std::string &value) { j[name] = value; }
void WriteJson(json &j, const std::string &name, const int64_t &value) { j[name] = value; }
json IntToJson(int64_t i) { return json(i); }
json StringToJson(const std::string& str) { return json(str); }
int64_t IntAdd(int64_t l, int64_t r) { return l + r; }
auto WithOutFile(const std::string &path, const auto &f) {
  std::ofstream s{path, std::ios_base::app};
  return f(s);
}
auto WithInFile(const std::string &path, const auto &f) {
  std::ifstream s{path};
  return f(s);
}
Unit OutputString(const std::ofstream &f, const std::string &str) {
  const_cast<std::ofstream &>(f) << str;
  return Unit{};
}
std::string InputLine(const std::ifstream &f) {
  std::string line;
  std::getline(const_cast<std::ifstream &>(f), line);
  return line;
}
json JsonOfString(const std::string &str) { return json::parse(str); }
json JsonMember(const std::string &f, const json &j) { return j[f]; }
std::string JsonToString(const json &j) { return j.template get<std::string>(); }
int64_t JsonToInt(const json &j) { return j.template get<int64_t>(); }
bool StringEqual(const std::string &l, const std::string &r) { return l == r; }
#define Assert assert
template <typename T> struct ListNode {
  virtual ~ListNode() {}
};
template <typename T> using List = std::shared_ptr<ListNode<T>>;
template <typename T> struct NilNode : ListNode<T> {};
template <typename T> List<T> Nil() { return std::make_shared<NilNode<T>>(); }
template <typename T> struct ConsNode : ListNode<T> {
  T hd;
  List<T> tl;
  ConsNode(const T &hd, const List<T> &tl) : hd(hd), tl(tl) {}
};
template <typename T> List<T> Cons(const T &hd, const List<T> &tl) { return std::make_shared<ConsNode<T>>(hd, tl); }
template <typename T> auto ListMatch(const List<T> &l, const auto &n, const auto &c) {
  auto *p_ = l.get();
  if (auto *p = dynamic_cast<NilNode<T> *>(p_)) {
    return n(Unit{});
  } else {
    {
      auto *p = dynamic_cast<ConsNode<T> *>(p_);
      assert(p);
      return c(p->hd, p->tl);
    }
  }
}
template <typename T> T ListHeadExn(const List<T> &l) {
  auto *p = dynamic_cast<ConsNode<T> *>(l.get());
  assert(p);
  return p->hd;
}
template <typename T> List<T> ListTailExn(const List<T> &l) {
  auto *p = dynamic_cast<ConsNode<T> *>(l.get());
  assert(p);
  return p->tl;
}

template <typename T> bool ListIsEmpty(const List<T> &l) {
  auto *p_ = l.get();
  if (auto *p = dynamic_cast<NilNode<T> *>(p_)) {
    return true;
  } else {
    {
      auto *p = dynamic_cast<ConsNode<T> *>(p_);
      assert(p);
      return false;
    }
  }
}

template <typename T> bool ListIsSingleton(const List<T> &l) {
  auto *p_ = l.get();
  if (auto *p = dynamic_cast<NilNode<T> *>(p_)) {
    return false;
  } else {
    {
      auto *p = dynamic_cast<ConsNode<T> *>(p_);
      assert(p);
      return ListIsEmpty(p->tl);
    }
  }
}

template <typename X> auto ListMap(const List<X> &l, const auto &f) -> List<decltype(f(std::declval<const X &>()))> {
  using Y = decltype(f(std::declval<const X &>()));
  return ListMatch(
      l, [&](const Unit &) { return Nil<Y>(); },
      [&](const X &hd, const List<X> &tl) { return Cons<Y>(f(hd), ListMap(tl, f)); });
}

template <typename X> Unit ListIter2_(const X &hd, const List<X> &tl, const auto &f) {
  return ListMatch(
      tl, [&](const Unit &) { return Unit{}; },
      [&](const X &hd_, const List<X> &tl_) {
        f(hd, hd_);
        return ListIter2_(hd_, tl_, f);
      });
}

template <typename X> Unit ListIter2(const List<X> &l, const auto &f) {
  return ListMatch(
      l, [&](const Unit &) { return Unit{}; }, [&](const X &hd, const List<X> &tl) { return ListIter2_(hd, tl, f); });
}

template <typename X> Unit ListIter(const List<X> &l, const auto &f) {
  return ListMatch(
      l, [&](const Unit &) { return Unit{}; },
      [&](const X &hd, const List<X> &tl) {
        f(hd);
        return ListIter(tl, f);
      });
}

template <typename X> List<X> ListAppend(const List<X> &l, const List<X> &r) {
  return ListMatch(
      l, [&](const Unit &) { return r; }, [&](const X &hd, const List<X> &tl) { return Cons(hd, ListAppend(tl, r)); });
}

template <typename X> std::optional<X> ListHead(const List<X> &l) {
  return ListMatch(
      l, [&](const Unit &) { return std::optional<X>(); },
      [&](const X &x, const List<X> &l_) { return std::optional<X>(x); });
}
template <typename X> X ListLastDefault(const List<X> &l, const X &x) {
  return ListMatch(
      l, [&](const Unit &) { return x; }, [&](const X &x_, const List<X> &l_) { return ListLastDefault(l_, x_); });
}
template <typename X> std::optional<X> ListLast(const List<X> &l) {
  return ListMatch(
      l, [&](const Unit &) { return std::optional<X>(); },
      [&](const X &x, const List<X> &l_) { return std::optional<X>(ListLastDefault(l_, x)); });
}

template <typename X> bool IsSome(const std::optional<X> &opt) { return opt.has_value(); }
template <typename X> X UnSome(const std::optional<X> &opt) { return opt.value(); }
template <typename X> auto OptionMatch(const std::optional<X> &opt, const auto &n, const auto &s) {
  if (!opt.has_value()) {
    return n(Unit{});
  } else {
    return s(opt.value());
  }
}
template <typename X> auto OptionMatch(X *opt, const auto &n, const auto &s) {
  if (opt == nullptr) {
    return n(Unit{});
  } else {
    return s(opt);
  }
}

template <typename X> std::pair<List<X>, List<X>> ListSplitN(const List<X> &l, int64_t n) {
  if (n == 0) {
    return std::pair<List<X>, List<X>>(Nil<X>(), l);
  } else {
    auto p = ListSplitN(ListTailExn(l), n - 1);
    return std::pair<List<X>, List<X>>(Cons(ListHeadExn(l), p.first), p.second);
  }
}
template <typename X> X ListNthExn(const List<X> &l, int64_t n) {
  if (n == 0) {
    return ListHeadExn(l);
  } else {
    return ListNthExn(ListTailExn(l), n - 1);
  }
}
template <typename X, typename Y> std::pair<X, Y> MakePair(const X &x, const Y &y) { return std::pair<X, Y>(x, y); }
template <typename X, typename Y> X Zro(const std::pair<X, Y> &p) { return p.first; }
template <typename X, typename Y> Y Fst(const std::pair<X, Y> &p) { return p.second; }

List<json> JsonToList(const json &j) {
  List<json> ret = Nil<json>();
  for (auto it = j.crbegin(); it != j.crend(); ++it) {
    ret = Cons(*it, ret);
  }
  return ret;
}

template <typename T> int64_t ListIntSum(const List<T> &l, const auto &f) {
  return ListMatch(
      l, [&](const Unit &) { return static_cast<int64_t>(0); },
      [&](const auto &hd, const auto &tl) { return f(hd) + ListIntSum(tl, f); });
}

Unit JsonToChannel(const std::ofstream &f, const json &j) {
  const_cast<std::ofstream &>(f) << j;
  return Unit{};
}

Unit AssertNodeValueEqual(const auto &l, const auto &r) { return Unit{}; }

Unit IterLines(const std::ifstream &i, const auto &f) {
  std::string str;
  while (getline(const_cast<std::ifstream &>(i), str)) {
    f(str);
  }
  return Unit{};
}

template <typename X> bool HashtblContain(const std::unordered_map<std::string, X> &hash, const std::string &field) {
  return hash.count(field) == 1;
}
template <typename X> X HashtblFindExn(const std::unordered_map<std::string, X> &hash, const std::string &field) {
  assert(hash.count(field) == 1);
  return hash.at(field);
}
template <typename X>
Unit HashtblForceRemove(const std::unordered_map<std::string, X> &hash, const std::string &field) {
  assert(hash.count(field) == 1);
  const_cast<std::unordered_map<std::string, X> &>(hash).erase(field);
  return Unit{};
}
template <typename X>
Unit HashtblAddExn(const std::unordered_map<std::string, X> &hash, const std::string &field, const X &v) {
  assert(hash.count(field) == 0);
  const_cast<std::unordered_map<std::string, X> &>(hash).insert_or_assign(field, v);
  return Unit{};
}
template <typename X>
Unit HashtblSet(const std::unordered_map<std::string, X> &hash, const std::string &field, const X &v) {
  const_cast<std::unordered_map<std::string, X> &>(hash).insert_or_assign(field, v);
  return Unit{};
}
struct Content;
using Node = std::shared_ptr<Content>;
struct LayoutNodeContent;
using LayoutNode = std::shared_ptr<LayoutNodeContent>;
struct LayoutNodeContent {
  List<LayoutNode> children;
  explicit LayoutNodeContent(const List<LayoutNode> &children) : children(children) {}
};
LayoutNode MakeLayoutNode(const List<LayoutNode> &children) { return std::make_shared<LayoutNodeContent>(children); }

bool eq(int64_t x, int64_t y) { return x == y; }
bool eq(double x, double y) { return (std::isnan(x) && std::isnan(y)) || (x == y); }
bool eq(const std::string &x, const std::string &y) { return x == y; }
bool eq(bool x, bool y) { return x == y; }
bool neq(int64_t x, int64_t y) { return x != y; }
bool neq(double x, double y) { return !eq(x, y); }
bool neq(const std::string &x, const std::string &y) { return x != y; }
bool neq(bool x, bool y) { return x != y; }
template <typename X> bool EqualValue(const X &l, const X &r) { return eq(l, r); }

double max(double x, double y) { return std::isnan(x) ? x : std::isnan(y) ? y : x > y ? x : y; }
int64_t max(int64_t x, int64_t y) { return x > y ? x : y; }
template <typename T> T plus(T x, T y) { return x + y; }
template <typename T> T minus(T x, T y) { return x - y; }
template <typename T> T mult(T x, T y) { return x * y; }
template <typename T> T divide(T x, T y) { return x / y; }
template <typename T> bool gt(T x, T y) { return x > y; }
double int_to_float(int64_t x) { return static_cast<double>(x); }
double std_string_to_float(const std::string &x) { return std::stod(x); }
bool std_string_is_float(const std::string &x) {
  try {
    std::stod(x);
    return true;
  } catch (const std::invalid_argument &) {
    return false;
  } catch (const std::out_of_range &) {
    return false;
  }
}
std::string std_strip_suffix(const std::string &str, const std::string &sfx) {
  return str.substr(0, str.size() - sfx.size());
}
bool std_has_suffix(const std::string &str, const std::string &sfx) {
  return str.size() >= sfx.size() && str.substr(str.size() - sfx.size(), sfx.size()) == sfx;
}
std::string std_strip_prefix(const std::string &str, const std::string &pfx) {
  return str.substr(pfx.size(), str.size() - pfx.size());
}
bool std_has_prefix(const std::string &str, const std::string &pfx) {
  return str.size() >= pfx.size() && str.substr(0, pfx.size()) == pfx;
}
std::string std_nth_by_sep(const std::string &str, const std::string &sep, int64_t nth) {
  std::stringstream test(str);
  std::string segment;
  assert(sep.size() == 1);

  while (std::getline(test, segment, sep.at(0))) {
    if (nth == 0) {
      return segment;
    } else {
      --nth;
    }
  }
  Panic();
}

#include <foonathan/memory/memory_pool.hpp>
#include <foonathan/memory/namespace_alias.hpp>
#include <foonathan/memory/std_allocator.hpp>
using namespace memory::literals;

template <typename T> struct PoolAllocator {
  static inline memory::memory_pool<> *pool_;
  static inline memory::std_allocator<T, memory::memory_pool<>> *allocator_;
  // copied from boost.pool
  struct initializer {
    initializer() {
      pool_ = new memory::memory_pool<>(sizeof(T), 1024_KiB);
      allocator_ = new memory::std_allocator<T, memory::memory_pool<>>(*pool_);
    }
    ~initializer() {
      // technically we should destroy it, but we are exiting anyway.
    }
    void do_nothing() {}
  };
  static inline initializer init;
  static auto &get_allocator() {
    init.do_nothing();
    return *allocator_;
  }
  bool operator==(const PoolAllocator<T> &) const { return true; }
  bool operator!=(const PoolAllocator<T> &) const { return false; }
  using value_type = T;
  using pointer = T *;
  using size_type = size_t;
  static void deallocate(const pointer ptr, const size_type n) { get_allocator().deallocate(ptr, n); }
  static pointer allocate(const size_type n) { return get_allocator().allocate(n); }
};

template <typename T> using default_allocator = PoolAllocator<T>;

//template <typename T> using default_allocator = std::allocator<T>;

#include "otto.h"
typedef total_order<1.4, uint32_t> TotalOrderS;
typedef TotalOrderS::node TotalOrder;
TotalOrderS *tos = new TotalOrderS();
std::shared_ptr<RefNode<TotalOrder>> current_time;
TotalOrder NextTotalOrder(const TotalOrder &to) { return tos->insert(to); }

#if BOOST_ARCH_X86
#include <x86intrin.h>

inline unsigned long long readTSC() {
  return __rdtsc();
}

inline unsigned long long readTSCP() {
  unsigned int aux;
  return __rdtscp(&aux);
}

#elif BOOST_ARCH_ARM >= BOOST_VERSION_NUMBER(8,0,0)

inline uint64_t readTSC() {
  uint64_t cntvct;
  asm volatile ("mrs %0, cntvct_el0" : "=r"(cntvct));
  return cntvct;
}

inline uint64_t readTSCP() {
  uint64_t cntvct;
  asm volatile ("isb; mrs %0, cntvct_el0; isb" : "=r"(cntvct));
  return cntvct;
}

#else

#error "rdtsc not implemented on this arch"

#endif

using rdtsc_type = decltype(readTSC());

#if BOOST_OS_LINUX
#include <papiStdEventDefs.h>
#include <papi.h>

static int EventSet = PAPI_NULL;
static bool papi_initialized = false;

void papi_init() {
  assert(!papi_initialized);

  int retval;

  if (PAPI_library_init(PAPI_VER_CURRENT) != PAPI_VER_CURRENT) {
    std::cout << "PAPI_library_init not ok" << std::endl;
    Panic();
  }

  if (PAPI_query_event(PAPI_L1_DCM) != PAPI_OK) { 
    std::cout << "PAPI_L1_DCM not available" << std::endl;
    Panic();
  }

  if (PAPI_query_event(PAPI_L2_DCM) != PAPI_OK) { 
    std::cout << "PAPI_L2_DCM not available" << std::endl;
    Panic();
  }

  if (PAPI_create_eventset(&EventSet) != PAPI_OK) {
    std::cout << "PAPI_create_eventset not ok" << std::endl;
    Panic();
  }

  if ((retval = PAPI_add_event(EventSet, PAPI_L2_DCM)) != PAPI_OK) {
    std::cout << "PAPI_add_eventset not ok" << std::endl;
    fprintf(stderr, "PAPI error %d: %s\n",retval,PAPI_strerror(retval));
    Panic();
  }

  if ((retval = PAPI_start(EventSet)) != PAPI_OK) {
    std::cout << "PAPI_start not ok" << std::endl;
    fprintf(stderr, "PAPI error %d: %s\n",retval,PAPI_strerror(retval));
    Panic();
  }

  std::cout << "papi initialization ok" << std::endl;
  papi_initialized = true;
}

int64_t read_papi() {
  if (!papi_initialized) {
    papi_init();
  }

  long long counts[1];

  int retval;
  if ((retval = PAPI_read(EventSet, counts)) != PAPI_OK) {
    std::cout << "PAPI_read not ok" << std::endl;
    Panic();
  }

  return counts[0];
}

#include <cassert>
#include <cstdint>
#include <cstring>
#include <linux/perf_event.h>
#include <linux/hw_breakpoint.h>
#include <optional>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdio.h>
#include <vector>
#include <perfmon/pfmlib.h>
#include <perfmon/pfmlib_perf_event.h>
#include <err.h>
#include <sys/mman.h>
#include <sched.h>
#include <array>
#define PAGE_SIZE 4096

#include <x86intrin.h>
#include <cpuid.h>
#define rmb() asm volatile("" ::: "memory")
#define rdpmc(x) __rdpmc(x)
#define rdtsc() __rdtsc()

// https://w0.hatenablog.com/entry/20140307/1394139628
#define barrier() do{rmb();			\
    unsigned tmp;\
    __cpuid(0, tmp, tmp, tmp, tmp);rmb();}while(0)
#define barrier()
template <typename T>
static inline T atomic_load(T* t)
{
    auto t_v = static_cast<volatile T*>(t);
    return __atomic_load_n(t_v, __ATOMIC_RELAXED);
}
using u32 = uint32_t;
using u64 = uint64_t;
struct LibPFM{
    LibPFM(){
        int ret = pfm_initialize();
        assert(ret == PFM_SUCCESS);
    }
    perf_event_attr get_perf_arg(const char* name){
        perf_event_attr attr;
        pfm_perf_encode_arg_t arg;
        memset(&arg, 0, sizeof(arg));
        arg.size = sizeof(arg);
        arg.attr = &attr;
        int ret = pfm_get_os_event_encoding(name, PFM_PLM3, PFM_OS_PERF_EVENT, &arg);
      	if (ret != PFM_SUCCESS) {
	        fprintf(stderr, "PFM error %d: %s\n",ret,pfm_strerror(ret));
	      }
        assert(ret == PFM_SUCCESS);
        return attr;
    }
    ~LibPFM(){
        pfm_terminate();
    }
};

struct PerfResult{
    u64 count;
    u64 enabled;
    u64 running;
    PerfResult(u64 count, u64 enabled, u64 running):
        count(count), enabled(enabled), running(running){}
};

#ifdef PERF_ATTR_SIZE_VER0
#ifdef PERF_ATTR_SIZE_VER8
#define PERF_HAVE_CONFIG3
#endif
#else
#error "PERF_ATTR_SIZE_VER0"
#endif

struct PerfEvent{
    int fd;
    perf_event_mmap_page* header;
    // https://github.com/intel/libipt/blob/4a06fdffae39dadef91ae18247add91029ff43c0/doc/howto_capture.md?plain=1#L77
    void* base, *data;
    size_t mapped_len;
    PerfEvent(const perf_event_attr& perf_config){
        // https://gist.github.com/teqdruid/2473071
        struct perf_event_attr attr;
        memset(&attr, 0, sizeof(attr));

        // sad: version incompatible        
        //attr = perf_config;
        attr.type = perf_config.type;
        attr.config  = perf_config.config;
        attr.config1 = perf_config.config1;
        attr.config2 = perf_config.config2;
        #ifdef PERF_HAVE_CONFIG3
          attr.config3 = perf_config.config3;
        #endif

        attr.size = sizeof(perf_event_attr);
        /*
        attr.type = PERF_TYPE_HARDWARE;
        attr.config = PERF_COUNT_HW_INSTRUCTIONS;
        */
        attr.disabled = 1;
        attr.exclude_kernel = 1;
        attr.exclude_hv = 1;
        attr.read_format = PERF_FORMAT_TOTAL_TIME_ENABLED|PERF_FORMAT_TOTAL_TIME_RUNNING|PERF_FORMAT_ID|PERF_FORMAT_LOST;
	attr.sample_period = 1;
        fd = perf_event_open(&attr, 0, -1, -1, 0);
        if(fd<0){
            perror("PerfEvent creation failed");
        }
        assert(fd>=0);
        size_t n = 4;
        mapped_len = (((size_t)1)+(1<<n)) * PAGE_SIZE;
        base = mmap(NULL, mapped_len, PROT_READ, MAP_SHARED, fd, 0);
        assert(base!=MAP_FAILED);
        header = (perf_event_mmap_page*)base;
        data = (char*)base + header->data_offset;
    }
    void reset(){
        ioctl(fd, PERF_EVENT_IOC_RESET, 0);
    }
    void enable(){
        barrier();
        ioctl(fd, PERF_EVENT_IOC_ENABLE, 0);
        barrier();

    }
    void disable(){
        barrier();
        ioctl(fd, PERF_EVENT_IOC_DISABLE, 0);
        barrier();

    }
    PerfResult read_count(){
        assert(fd>=0);
        std::array<u64, 5> readout = {};
        auto result = read(fd, &readout, sizeof(readout));
        assert(result==sizeof(readout));
        //printf("readout: %ld %ld %ld %ld %ld\n", readout[0], readout[1], readout[2], readout[3], readout[4]);
        return PerfResult(readout[0], readout[1], readout[2]);
    }
    bool cap_user_rdpmc(){
        return header->cap_user_rdpmc;
    }
    bool cap_user_time(){
        return header->cap_user_time;
    }
    std::optional<PerfResult> read_count_rdpmc(){
        assert(cap_user_rdpmc());
        assert(cap_user_time());
        // https://man7.org/linux/man-pages/man2/perf_event_open.2.html
        volatile perf_event_mmap_page* pc = header;
        u32 seq, idx;
        idx = pc->index;
        u64 offset = 0;
        u64 regval = 0;
        volatile u32* lock = &pc->lock;
        u64 enabled, running;
        //int spin = 0;
        do {
            //spin++;
            seq = atomic_load(lock);
            barrier();
            enabled = pc->time_enabled;
            running = pc->time_running;
            /*
            enabled = pc->time_enabled;
            do{
                auto cyc = rdtsc();
                auto time_offset = pc->time_offset;
                auto time_mult   = pc->time_mult;
                auto time_shift  = pc->time_shift;
                u64 quot, rem;
                u64 delta;

                quot  = cyc >> time_shift;
                rem   = cyc & (((u64)1 << time_shift) - 1);
                delta = time_offset + quot * time_mult +
                        ((rem * time_mult) >> time_shift);
            }while(0);
            */
            idx = pc->index;
            offset = pc->offset;
            regval = 0;
            auto pmc_width = pc->pmc_width;
            if(idx) {
                regval = rdpmc(idx - 1);
                regval <<= 64 - pmc_width;
                regval >>= 64 - pmc_width; // signed shift right
            }else{
                return std::nullopt;
            }
            barrier();
        } while (atomic_load(lock)!= seq);
        //printf("Spinned %d (offset=%lu regval = %lu idx=%d)\n", seq, offset, regval, idx);
        //printf("Enabled=%ld running=%ld\n", enabled, running);
        auto count = offset + regval;
        return PerfResult(count, enabled, running);
    }
    ~PerfEvent(){
        int ret = munmap(base, mapped_len);
        assert(ret==0);
        close(fd);
    }
};

static bool pfm_initialized = false;
static PerfEvent* pfm_event = nullptr;

void pfm_init() {
  static LibPFM pfm;

  const char* pfm_l1_miss = "PERF_COUNT_HW_CACHE_L1D:MISS";
  const char* pfm_l2_miss = "L2_RQSTS:MISS";
  const char* pfm_l2_miss_stall = "CYCLE_ACTIVITY:STALLS_L2_PENDING";
  const char* pfm_cycle = "CYCLES";
  const char* pfm_branch_miss = "BR_MISP_EXEC";

  static PerfEvent event(pfm.get_perf_arg(pfm_l2_miss));
  pfm_event = &event;

  pfm_event->reset();
  pfm_event->enable();

  pfm_initialized = true;
}

struct PFMInitializer {
  PFMInitializer() {
    pfm_init();
  }
} pfm_initializer;

int64_t read_pfm() {
  // return pfm_event->read_count().count;
  return pfm_event->read_count_rdpmc().value().count;
}
#endif

struct Stat {
  rdtsc_type time = 0;
  int64_t l2m = 0;
  Stat operator-(const Stat& rhs) const {
    return Stat{time - rhs.time, l2m - rhs.l2m};
  }
  Stat& operator+=(const Stat& rhs) {
    time += rhs.time;
    l2m += rhs.l2m;
    return *this;
  }
  static Stat measure() {
#if BOOST_OS_LINUX
    auto tsc = readTSC();
    auto pfm = read_pfm();
    return Stat(tsc, pfm);
#else
    return Stat(readTSC(), 1);
#endif
  }
};

// a timer that allow recursive measuring. however, the outer level does not contain the inner level time.
struct Timer {
  struct Node {
    Stat start_stat = Stat::measure();
    Stat skipped_stat;
  };
  std::vector<Node> v;
} t;

//bool measuring = false;
auto RecordOverhead(const auto& f) {
  //if (measuring) { Panic(); }
  //measuring = true;
  t.v.push_back(Timer::Node());
  auto val = f(Unit {});
  Stat end_stat = Stat::measure();
  auto begin_node = t.v.back();
  t.v.pop_back();
  auto stat_diff = end_stat - begin_node.start_stat;
  if (!t.v.empty()) {
    t.v.back().skipped_stat += stat_diff;
  }
  Stat stat = stat_diff - begin_node.skipped_stat;
  MetricRecordOverheadTime(stat.time);
  MetricRecordOverheadL2m(stat.l2m);
  //measuring = false;
  return val;
}

auto RecordEval(const auto& f) {
  //if (measuring) { Panic(); }
  //measuring = true;
  t.v.push_back(Timer::Node());
  auto val = f(Unit {});
  Stat end_stat = Stat::measure();
  auto begin_node = t.v.back();
  t.v.pop_back();
  auto stat_diff = end_stat - begin_node.start_stat;
  if (!t.v.empty()) {
    Panic();
    t.v.back().skipped_stat += stat_diff;
  }
  Stat stat = stat_diff - begin_node.skipped_stat;
  MetricRecordEval(stat.time);
  //measuring = false;
  return val;
}

Stat stat;

Unit StartRecordOverhead() {
  //if (measuring) { Panic(); }
  //measuring = true;
  stat = Stat::measure();
  return Unit{};
}
Unit StopRecordOverhead() {
  Stat diff = Stat::measure() - stat;
  MetricRecordOverheadTime(diff.time);
  MetricRecordOverheadL2m(diff.l2m);
  //measuring = false;
  return Unit{};
}

Unit StartRecordEval() {
  //if (measuring) { Panic(); }
  //measuring = true;
  stat = Stat::measure();
  return Unit{};
}
Unit StopRecordEval() {
  Stat diff = Stat::measure() - stat;
  MetricRecordEval(diff.time);
  //measuring = false;
  return Unit{};
}
