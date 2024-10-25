#pragma once

#include "no_destructor.h"
#include <cstdint>
#include <cstdio>
#include <memory>
#include <vector>

template <typename T> class listv {
private:
  using ptr_t = uint16_t;

  struct node {
    ptr_t prev;
    ptr_t next;
    T elem;
  };

  template <typename... Args> ptr_t _new(Args &&...args) {
    if (freelist->empty()) {
      ptr_t result = storage->size();
      storage->emplace_back(std::forward<Args>(args)...);
      return result;
    } else {
      ptr_t result = freelist->back();
      freelist->pop_back();
      return result;
    }
  }

  void _del(ptr_t n) { freelist->push_back(n); }

  ptr_t sentinel;
  bool moved;

public:
  static inline no_destructor<std::vector<node>> storage = []() {
    std::vector<node> v;
    v.reserve(64 * 1024 * 1024 / sizeof(node));
    return no_destructor<std::vector<node>>(std::move(v));
  }();
  static inline no_destructor<std::vector<ptr_t>> freelist = []() {
    std::vector<ptr_t> v;
    v.reserve(64 * 1024 * 1024 / sizeof(ptr_t));
    return no_destructor<std::vector<ptr_t>>(std::move(v));
  }();

  struct iterator {
    ptr_t inner;

    iterator &operator++() {
      inner = (*storage)[inner].next;
      return *this;
    }

    iterator operator++(int) {
      iterator old = *this;
      operator++();
      return old;
    }

    iterator &operator--() {
      inner = (*storage)[inner].prev;
      return *this;
    }

    iterator operator--(int) {
      iterator old = *this;
      operator++();
      return old;
    }

    friend bool operator==(const iterator &l, const iterator &r) { return l.inner == r.inner; }

    T *operator->() const { return &(*storage)[inner].elem; }

    T &operator*() const { return (*storage)[inner].elem; }

    iterator next() const { return iterator{(*storage)[inner].next}; }

    iterator prev() const { return iterator{(*storage)[inner].prev}; }
  };

  listv() {
    sentinel = _new();
    (*storage)[sentinel].prev = sentinel;
    (*storage)[sentinel].next = sentinel;
    moved = false;
  }

  listv(const listv &other) {
    if (!moved) {
      // use after free here is fine because there is no intermediate malloc
      for (ptr_t cur = (*storage)[sentinel].next; cur != sentinel; cur = (*storage)[cur].next) {
        _del(cur);
      }
    } else {
      sentinel = _new();
      moved = false;
    }
    (*storage)[sentinel].prev = sentinel;
    (*storage)[sentinel].next = sentinel;
    for (ptr_t cur = (*storage)[other.sentinel].next; cur != sentinel; cur = (*storage)[cur].next) {
      emplace_back((*storage)[cur].elem);
    }
  }

  listv(listv &&other) {
    sentinel = other.sentinel;
    other.moved = true;
  }

  ~listv() {
    if (!moved) {
      // use after free here is fine because there is no intermediate malloc
      for (ptr_t cur = (*storage)[sentinel].next; cur != sentinel; cur = (*storage)[cur].next) {
        _del(cur);
      }
      _del(sentinel);
    }
  }

  iterator begin() { return iterator{(*storage)[sentinel].next}; }

  iterator end() { return iterator{sentinel}; }

  template <typename... Args> iterator emplace(const iterator &pos, Args &&...args) {
    ptr_t result = _new();
    (*storage)[result].prev = (*storage)[pos.inner].prev;
    (*storage)[result].next = pos.inner;
    std::construct_at(&(*storage)[result].elem, std::forward<Args>(args)...);

    (*storage)[(*storage)[pos.inner].prev].next = result;
    (*storage)[pos.inner].prev = result;

    return iterator{result};
  }

  template <typename... Args> iterator emplace_back(Args &&...args) {
    return emplace(end(), std::forward<Args>(args)...);
  }

  void erase(const iterator &pos) {
    // if (pos.inner == sentinel) {
    //   return;
    // }

    ptr_t pos_prev = (*storage)[pos.inner].prev;
    ptr_t pos_next = (*storage)[pos.inner].next;

    (*storage)[pos_prev].next = pos_next;
    (*storage)[pos_next].prev = pos_prev;

    _del(pos.inner);
  }

  void splice(const iterator &pos, listv<T> &other, const iterator &first, const iterator &last) {
    // if (first.inner == other.sentinel) {
    //   return;
    // }

    ptr_t old_last_prev = (*storage)[last.inner].prev;

    // 1. Cut off [first, last)
    (*storage)[(*storage)[first.inner].prev].next = last.inner;
    (*storage)[last.inner].prev = (*storage)[first.inner].prev;

    // 2. Attach to our list
    (*storage)[(*storage)[pos.inner].prev].next = first.inner;
    (*storage)[first.inner].prev = (*storage)[pos.inner].prev;
    (*storage)[pos.inner].prev = old_last_prev;
    (*storage)[old_last_prev].next = pos.inner;
  }

  void print() {
    printf("---------------------------------\n");
    printf("Sentinel: %d\n", sentinel);
    for (int i = 0; i < storage.size(); i++) {
      printf("%s <- %d -> %s | %d\n", storage[i].prev == sentinel ? "/" : std::to_string(storage[i].prev).c_str(), i,
             storage[i].next == sentinel ? "/" : std::to_string(storage[i].next).c_str(), storage[i].elem);
    }
    printf("---------------------------------\n");
    for (int i = 0; i < freelist->size(); i++) {
      printf("%d\n", (*freelist)[i]);
    }
    printf("---------------------------------\n");
  }
};
