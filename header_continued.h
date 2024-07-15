#pragma once
Node MakeNode(const std::string &name, std::unordered_map<std::string, Value> &&attr,
              std::unordered_map<std::string, Value> &&prop, int64_t extern_id, const List<Node> &children) {
  return std::make_shared<Content>(name, std::move(attr), std::move(prop), extern_id, children);
}
Node MakeNode(const std::string &name, const std::unordered_map<std::string, Value> &attr,
              const std::unordered_map<std::string, Value> &prop, int64_t extern_id, const List<Node> &children) {
  return std::make_shared<Content>(name, std::move(attr), std::move(prop), extern_id, children);
}
Content *ToPath(const std::optional<Node> &opt) {
  if (opt.has_value()) {
    return opt.value().get();
  } else {
    return nullptr;
  }
}
Content *ToPath(Content *ptr) { return ptr; }
template <typename T> T GetProp(const Node &n, const std::string &field) { return std::get<T>(n->prop.at(field).v); }
bool HasProp(const Node &n, const std::string &field) { return n->prop.count(field) == 1; }
template <typename T> T GetAttr(const Node &n, const std::string &field) { return std::get<T>(n->attr.at(field).v); }
bool HasAttr(const Node &n, const std::string &field) { return n->attr.count(field) == 1; }
