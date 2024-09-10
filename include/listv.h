#pragma once

#include <cstdint>
#include <cstdio>
#include <memory>
#include <queue>
#include <vector>

template <typename T> struct listv {
  struct _node {
    T _elem;
    uint32_t _next = 0;
    uint32_t _prev = 0;
  };

  static inline std::vector<_node> _storage;
  static inline std::queue<uint32_t> _freelist;

  uint32_t _head = 0;

  struct iterator {
    uint32_t p;

    inline iterator next() const { return iterator{_storage[p]._next}; }
    inline iterator prev() const { return iterator{_storage[p]._prev}; }

    inline T &operator*() { return _storage[p]._elem; }

    inline iterator &operator++() {
      p = _storage[p]._next;
      return *this;
    }

    inline iterator &operator--() {
      p = _storage[p]._prev;
      return *this;
    }

    inline iterator operator++(int) {
      iterator old = *this;
      operator++();
      return old;
    }

    inline iterator operator--(int) {
      iterator old = *this;
      operator--();
      return old;
    }

    friend inline bool operator==(const iterator &l, const iterator &r) { return l.p == r.p; }
  };

  listv() {
    if (_storage.size() == 0) {
      // sentinel
      _storage.push_back(_node{});
    }
  }

  ~listv() {}

  iterator begin() const { return iterator{_head}; }

  iterator end() const { return iterator{0}; }

  template <typename... Args> iterator emplace(const iterator &pos, Args &&...args) {
    uint32_t cur_p;
    if (!_freelist.empty()) {
      cur_p = _freelist.front();
      _freelist.pop();
      std::construct_at(&_storage[cur_p]._elem, std::forward<Args>(args)...);
      _storage[cur_p]._next = pos.p;
      _storage[cur_p]._prev = _storage[pos.p]._prev;
    } else {
      cur_p = _storage.size();
      _storage.emplace_back(std::forward<Args>(args)..., pos.p, _storage[pos.p]._prev);
    }
    _storage[pos.p]._prev = cur_p;
    if (_head == pos.p) {
      _head = cur_p;
    }
    return iterator{cur_p};
  }

  void remove(const iterator &pos) {
    if (pos.p == 0) {
      return;
    }

    uint32_t old_prev = _storage[pos.p]._prev;
    uint32_t old_next = _storage[pos.p]._next;
    _storage[old_prev]._next = old_next;
    _storage[old_next]._prev = old_prev;
    _freelist.push(pos.p);

    if (_head == pos.p) {
      _head = old_next;
    }
  }

  void splice(const iterator &pos, listv<T> &other, const iterator &first, const iterator &last) {
    // 1. remove [first, last)
    _storage[_storage[first.p]._prev]._next = last.p;
    uint32_t old_prev = _storage[last.p]._prev;
    _storage[last.p]._prev = _storage[first.p]._prev;

    // 2. concat before pos
    _storage[_storage[pos.p]._prev]._next = first.p;
    _storage[first.p]._prev = _storage[pos.p]._prev;

    _storage[old_prev]._next = pos.p;
    _storage[pos.p]._prev = old_prev;

    if (_head == pos.p) {
      _head = first.p;
    }
    
    if (other._head == first.p) {
      other._head = last.p;
    }
  }

  void print() {
    printf("head: %d\n", _head);
    for (int i = 0; i < _storage.size(); i++) {
      printf("%d <-  %d  -> %d  |  %ld\n", _storage[i]._prev, i, _storage[i]._next, _storage[i]._elem);
    }
  }
};
