#pragma once
Node MakeNode(const std::string &name, std::unordered_map<std::string, Value> &&attr,
              std::unordered_map<std::string, Value> &&prop, int64_t extern_id, const List<Node> &children) {
  return std::make_shared<Content>(StringToDEString(name), std::move(attr), std::move(prop), extern_id, children);
}
Node MakeNode(const std::string &name, const std::unordered_map<std::string, Value> &attr,
              const std::unordered_map<std::string, Value> &prop, int64_t extern_id, const List<Node> &children) {
  return std::make_shared<Content>(StringToDEString(name), std::move(attr), std::move(prop), extern_id, children);
}
Content *ToPath(const std::optional<Node> &opt) {
  if (opt.has_value()) {
    return opt.value().get();
  } else {
    return nullptr;
  }
}
Content *ToPath(Content *ptr) { return ptr; }
using PQData = int8_t;
#include <map>

struct QueueValue {
  Node n;
  PQData rf;
};

#define QUEUE_IMPL 2

#if QUEUE_IMPL == 0
std::map<TotalOrder, QueueValue, std::less<TotalOrder>, default_allocator<std::pair<const TotalOrder, QueueValue>>>
    queue;

int64_t QueueSize() { return queue.size(); }
bool QueueIsEmpty() { return queue.empty(); }
Unit QueuePush(const TotalOrder &to, const Node &n, PQData &&data) {
  queue.insert({to, QueueValue(n, std::move(data))});
  return Unit{};
}
Unit QueuePush(const TotalOrder &to, Content *n, PQData &&data) {
  queue.insert({to, QueueValue(n->shared_from_this(), std::move(data))});
  return Unit{};
}
// todo:check
Unit QueueForcePush(const TotalOrder &to, const Node &n, PQData &&data) {
  queue.insert({to, QueueValue(n, std::move(data))});
  return Unit{};
}
// todo:check
Unit QueueForcePush(const TotalOrder &to, Content *n, PQData &&data) {
  queue.insert({to, QueueValue(n->shared_from_this(), std::move(data))});
  return Unit{};
}
std::pair<TotalOrder, QueueValue> QueuePeek() { return *(queue.begin()); }
std::pair<TotalOrder, QueueValue> QueuePop() {
  auto it = queue.begin();
  auto ret = *it;
  queue.erase(it);
  return ret;
}
#elif QUEUE_IMPL == 1
rb_tree<TotalOrder, QueueValue, default_allocator> queue;
int64_t QueueSize() { return queue.size(); }
bool QueueIsEmpty() { return queue.empty(); }
Unit QueuePush(const TotalOrder &to, const Node &n, PQData &&data) {
  queue.insert(to, QueueValue(n, std::move(data)));
  return Unit{};
}
Unit QueuePush(const TotalOrder &to, Content *n, PQData &&data) {
  queue.insert(to, QueueValue(n->shared_from_this(), std::move(data)));
  return Unit{};
}
// todo:check
Unit QueueForcePush(const TotalOrder &to, const Node &n, PQData &&data) {
  queue.insert(to, QueueValue(n, std::move(data)));
  return Unit{};
}
// todo:check
Unit QueueForcePush(const TotalOrder &to, Content *n, PQData &&data) {
  queue.insert(to, QueueValue(n->shared_from_this(), std::move(data)));
  return Unit{};
}
std::pair<TotalOrder, QueueValue> QueuePeek() { return std::make_pair(queue._leftmost->key, queue._leftmost->value); }
std::pair<TotalOrder, QueueValue> QueuePop() {
  auto ret = std::make_pair(queue._leftmost->key, queue._leftmost->value);

  // TODO: Move all this into a real func
  rb_tree<TotalOrder, QueueValue, default_allocator>::_rb_node *rebalance, *node;
  node = queue._leftmost;
  queue._leftmost = queue._leftmost->next();
  rebalance = queue.erase(node);
  if (rebalance) {
    queue.erase_color(rebalance);
  }
  queue._size -= 1;
  queue.allocator.deallocate(node, 1);

  return ret;
}
#elif QUEUE_IMPL == 2
SplayList<TotalOrder, QueueValue> queue;
int64_t QueueSize() { return queue.size; }
bool QueueIsEmpty() { return queue.size == 0; }
Unit QueuePush(const TotalOrder &to, const Node &n, PQData &&data) {
  queue.insert(to, QueueValue(n, std::move(data)));
  return Unit{};
}
Unit QueuePush(const TotalOrder &to, Content *n, PQData &&data) {
  queue.insert(to, QueueValue(n->shared_from_this(), std::move(data)));
  return Unit{};
}
// todo:check
Unit QueueForcePush(const TotalOrder &to, const Node &n, PQData &&data) {
  queue.insert(to, QueueValue(n, std::move(data)));
  return Unit{};
}
// todo:check
Unit QueueForcePush(const TotalOrder &to, Content *n, PQData &&data) {
  queue.insert(to, QueueValue(n->shared_from_this(), std::move(data)));
  return Unit{};
}
std::pair<TotalOrder, QueueValue> QueuePeek() { return queue.peek(); }
std::pair<TotalOrder, QueueValue> QueuePop() { return queue.pop(); }
#endif

bool eq(const DEStringRest &l, const DEStringRest &r) {
  return eq(l.a0, r.a0) && eq(l.a1, r.a1) && eq(l.a2, r.a2) && eq(l.a3, r.a3);
}
bool eq(const DEString &l, const DEString &r) { return l.c == r.c && eq(l.r, r.r); }
bool neq(const DEString &l, const DEString &r) { return !eq(l, r); }
DEStringRest StringToDEStringRest(const std::string &str) {
  std::stringstream test(str);
  std::string segment;

  DEStringRest r;
  if (std::getline(test, segment, ' ') && std_string_is_float(segment)) {
    r.a0 = std_string_to_float(segment);
  } else {
    return r;
  }
  if (std::getline(test, segment, ' ') && std_string_is_float(segment)) {
    r.a1 = std_string_to_float(segment);
  } else {
    return r;
  }
  if (std::getline(test, segment, ' ') && std_string_is_float(segment)) {
    r.a2 = std_string_to_float(segment);
  } else {
    return r;
  }
  if (std::getline(test, segment, ' ') && std_string_is_float(segment)) {
    r.a3 = std_string_to_float(segment);
  } else {
    return r;
  }
  return r;
}