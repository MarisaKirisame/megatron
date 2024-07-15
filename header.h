#pragma once
#include <cstddef>
#include <string>
#include <cassert>
#include <iostream>
#include <memory>
#include <fstream>
#include <variant>
#include <unordered_map>
#include <nlohmann/json.hpp>
using json = nlohmann::json;

struct Unit {

};
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
    return Unit {};
}
int64_t FreshMetric() {
    return 0;
}
void WriteMetric() {
    m.write_count += 1;
}
void InputChangeMetric(size_t i) {
    m.input_change_count += i;
}
void OutputChangeMetric(size_t i) {
    m.output_change_count += i;
}
int64_t MetricQueueSizeAcc() {
    return m.queue_size_acc;
}
int64_t MetricMetaWriteCount() {
    return m.meta_write_count;
}
int64_t MetricWriteCount() {
    return m.write_count;
}
int64_t MetricReadCount() {
    return m.read_count;
}
int64_t MetricMetaReadCount() {
    return m.meta_read_count;
}
int64_t MetricOutputChangeCount() {
    return m.output_change_count;
}
int64_t MetricInputChangeCount() {
    return m.input_change_count;
}
void Panic() {
    assert(false);
}
void PrintEndline(const std::string & str) {
    std::cout << str << std::endl;
}
Unit MakeUnit() {
    return Unit {};
}
template<typename T>
struct RefNode {
    T t;
    RefNode(const T& t) : t(t) { }
};
template<typename T>
using Ref = std::shared_ptr<RefNode<T>>;
template<typename T>
Ref<T> MakeRef(const T& t) {
    return std::make_shared<RefNode<T>>(t);
}
template<typename T>
T ReadRef(const Ref<T>& r) {
    return r->t;
}
template<typename T>
Unit WriteRef(Ref<T>& r, const T& t) {
    r->t = t;
    return Unit {};
}
// we dont need to output command
Unit MakeStack() {
    return Unit {};
}
Unit ClearStack(Unit) {
    return Unit {};
}
Unit PushStack(Unit, const auto&) {
    return Unit {};
}
std::string StackToList(Unit) {
    return "";
}
json FreshJson() {
    return json();
}
void WriteJson(json& j, const std::string& name, const std::string& value) {
    j[name] = value;
}
void WriteJson(json& j, const std::string& name, const int64_t& value) {
    j[name] = value;
}
int64_t IntAdd(int64_t l, int64_t r) { 
    return l + r; 
}
auto WithOutFile(const std::string& path, const auto& f) {
    std::ofstream s{path};
    return f(s);
}
auto WithInFile(const std::string& path, const auto& f) {
    std::ifstream s{path};
    return f(s);
}
Unit OutputString(const std::ofstream& f, const std::string& str) {
    const_cast<std::ofstream&>(f) << str;
    return Unit{};
}
std::string InputLine(const std::ifstream& f) {
    std::string line;
    std::getline(const_cast<std::ifstream&>(f), line);
    return line;
}
json JsonOfString(const std::string& str) {
    return json::parse(str);
}
json JsonMember(const json& j, const std::string& f) {
    return j[f];
}
std::string JsonToString(const json& j) {
    return j.template get<std::string>();
}
int64_t JsonToInt(const json& j) {
    return j.template get<int64_t>();
}
bool StringEqual(const std::string& l, const std::string& r) {
    return l == r;
}
#define Assert assert
struct Value {
    std::variant<int64_t, double, bool, std::string> v;
};
Value JsonToValue(const json& j) {
    if (j.is_string()) {
        return Value (JsonToString(j));
    } else if (j.is_number_integer()) {
        return Value (JsonToInt(j));
    }
    else {
        std::cout << "JsonToValue:" << std::endl;
        assert(false);
    }
}
std::unordered_map<std::string, Value> JsonToDict(const json& j) {
    std::unordered_map<std::string, Value> ret;
    for (auto& [key, val] : j.items()) {
        ret.insert({key, JsonToValue(val)});
    }
    return ret;
}
template<typename T>
struct ListNode {
    virtual ~ListNode() { }
};
template<typename T>
using List = std::shared_ptr<ListNode<T>>;
template<typename T>
struct NilNode : ListNode<T> { };
template<typename T>
List<T> Nil() {
    return std::make_shared<NilNode<T>>();
}
template<typename T>
struct ConsNode : ListNode<T> { 
    T hd;
    List<T> tl;
    ConsNode(const T& hd, const List<T>& tl) : hd(hd), tl(tl) { }
};
template<typename T>
List<T> Cons(const T& hd, const List<T>& tl) {
    return std::make_shared<ConsNode<T>>(hd, tl);
}
template<typename T>
auto ListMatch(const List<T>&l, const auto& n, const auto& c) {
    auto* p_ = l.get();
    if (auto* p = dynamic_cast<NilNode<T>*>(p_)) {
        return n();
    } else if (auto* p = dynamic_cast<ConsNode<T>*>(p_)) {
        return c(p->hd, p->tl);
    } else {
        assert(false);
    }
}
template<typename X>
auto ListMap(const List<X>& l, const auto& f) -> List<decltype(f(std::declval<const X&>()))> {
    using Y = decltype(f(std::declval<const X&>()));
    return ListMatch(
      l,
      [&](){ return Nil<Y>(); }, 
      [&](const X& hd, const List<X>& tl) {
        return Cons<Y>(f(hd), ListMap(tl, f));
      });
}
List<json> JsonToList(const json& j) {
    List<json> ret = Nil<json>();
    for (auto it = j.crbegin(); it != j.crend(); ++it) {
        ret = Cons(*it, ret);
    }
    return ret;
}

struct Content;
using Node = std::shared_ptr<Content>;
struct Content {
    Content* parent = nullptr;
    Content* prev = nullptr;
    Content* next = nullptr;
    Content* first = nullptr;
    Content* last = nullptr;
    int64_t extern_id;
    List<Node> children;
    std::string name;
    std::unordered_map<std::string, Value> attr;
    std::unordered_map<std::string, Value> prop;
    Content(const std::string& name,
            std::unordered_map<std::string, Value>&& attr,
            std::unordered_map<std::string, Value>&& prop,
            int64_t extern_id, 
            const List<Node>& children) :
            name(name),
            attr(std::move(attr)), 
            prop(std::move(prop)), 
            extern_id(extern_id), 
            children(children) { }
    Content(const std::string& name,
            const std::unordered_map<std::string, Value>& attr,
            const std::unordered_map<std::string, Value>& prop,
            int64_t extern_id, 
            const List<Node>& children) :
            name(name),
            attr(attr), 
            prop(prop), 
            extern_id(extern_id), 
            children(children) { }
};
Node MakeNode(const std::string& name,
              std::unordered_map<std::string, Value>&& attr,
              std::unordered_map<std::string, Value>&& prop,
              int64_t extern_id, 
              const List<Node>& children) {
    return std::make_shared<Content>(name, std::move(attr), std::move(prop), extern_id, children);
}
Node MakeNode(const std::string& name,
              const std::unordered_map<std::string, Value>& attr,
              const std::unordered_map<std::string, Value>& prop,
              int64_t extern_id, 
              const List<Node>& children) {
    return std::make_shared<Content>(name, std::move(attr), std::move(prop), extern_id, children);
}
struct LayoutNodeContent;
using LayoutNode = std::shared_ptr<LayoutNodeContent>;
struct LayoutNodeContent {
    List<LayoutNode> children;
    explicit LayoutNodeContent(const List<LayoutNode>& children) : children(children) { }
};
LayoutNode MakeLayoutNode(const List<LayoutNode>& children) {
    return std::make_shared<LayoutNodeContent>(children);
}
template<typename T>
int64_t ListIntSum(const List<T>& l, const auto& f) {
    return ListMatch(l, [&](){return static_cast<int64_t>(0);}, [&](const auto& hd, const auto& tl){ return f(hd) + ListIntSum(tl, f); });
}

Unit JsonToChannel(const std::ofstream& f, const json& j) {
    const_cast<std::ofstream&>(f) << j;
    return Unit {};
}

Unit AssertNodeValueEqual(const auto& l, const auto& r) {
    return Unit {};
}

Unit IterLines(const std::ifstream& i, const auto& f) {
    std::string str;
    while(getline(const_cast<std::ifstream&>(i), str)) {
        f(str);
    }
    return Unit {};
}
