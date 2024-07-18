#pragma once
#include <cassert>
#include <cstddef>
#include <fstream>
#include <iostream>
#include <memory>
#include <nlohmann/json.hpp>
#include <optional>
#include <string>
#include <unordered_map>
#include <variant>
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
#define Panic() assert(false)
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
struct Value {
  std::variant<int64_t, double, bool, std::string> v;
};
Value JsonToValue(const json &j) {
  if (j.is_string()) {
    return Value(JsonToString(j));
  } else if (j.is_number_integer()) {
    return Value(JsonToInt(j));
  } else {
    std::cout << "JsonToValue:" << std::endl;
    assert(false);
  }
}
std::unordered_map<std::string, Value> JsonToDict(const json &j) {
  std::unordered_map<std::string, Value> ret;
  for (auto &[key, val] : j.items()) {
    ret.insert({key, JsonToValue(val)});
  }
  return ret;
}
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
  } else if (auto *p = dynamic_cast<ConsNode<T> *>(p_)) {
    return c(p->hd, p->tl);
  } else {
    assert(false);
  }
}
template <typename T> T ListHeadExn(const List<T> &l) {
  if (auto *p = dynamic_cast<ConsNode<T> *>(l.get())) {
    return p->hd;
  } else {
    assert(false);
  }
}
template <typename T> List<T> ListTailExn(const List<T> &l) {
  if (auto *p = dynamic_cast<ConsNode<T> *>(l.get())) {
    return p->tl;
  } else {
    assert(false);
  }
}

template <typename T> bool ListIsEmpty(const List<T> &l) {
  auto *p_ = l.get();
  if (auto *p = dynamic_cast<NilNode<T> *>(p_)) {
    return true;
  } else if (auto *p = dynamic_cast<ConsNode<T> *>(p_)) {
    return false;
  } else {
    assert(false);
  }
}

template <typename T> bool ListIsSingleton(const List<T> &l) {
  auto *p_ = l.get();
  if (auto *p = dynamic_cast<NilNode<T> *>(p_)) {
    return false;
  } else if (auto *p = dynamic_cast<ConsNode<T> *>(p_)) {
    return ListIsEmpty(p->tl);
  } else {
    assert(false);
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

template <typename T> T max(T x, T y) { return x > y ? x : y; }
template <typename T> T plus(T x, T y) { return x + y; }
template <typename T> T minus(T x, T y) { return x - y; }
template <typename T> T mult(T x, T y) { return x * y; }
template <typename T> T divide(T x, T y) { return x / y; }
template <typename T> bool gt(T x, T y) { return x > y; }
double string_to_float(const std::string &x) { return std::stod(x); }
bool string_is_float(const std::string &x) {
  try {
    std::stod(x);
    return true;
  } catch (const std::invalid_argument &) {
    return false;
  }
}
double int_to_float(int x) { return static_cast<double>(x); }
std::string strip_suffix(const std::string &str, const std::string &sfx) {
  return str.substr(0, str.size() - sfx.size());
}
bool has_suffix(const std::string &str, const std::string &sfx) {
  return str.size() >= sfx.size() && str.substr(str.size() - sfx.size(), sfx.size()) == sfx;
}
bool has_prefix(const std::string &str, const std::string &pfx) {
  return str.size() >= pfx.size() && str.substr(0, pfx.size()) == pfx;
}
std::string nth_by_sep(const std::string &str, const std::string &sep, int nth) {
  auto to_string = [](auto &&r) -> std::string {
    const auto data = &*r.begin();
    const auto size = static_cast<std::size_t>(std::ranges::distance(r));
    return std::string{data, size};
  };
  assert(sep.size() == 1);
  auto range = str | std::ranges::views::split(sep.at(0)) | std::ranges::views::transform(to_string);
  return *std::next(range.begin(), nth);
}
#include "otto.h"
typedef total_order<1.4, uint32_t> TotalOrderS;
typedef TotalOrderS::node TotalOrder;
TotalOrderS tos;
auto current_time = MakeRef(tos.smallest());
TotalOrder NextTotalOrder(const TotalOrder &to) { return tos.insert(to); }