#pragma once

#include <cstdint>
#include <cstdio>
#include <memory>
#include <queue>
#include <string>
#include <variant>
#include <vector>

template <typename T> class listv {
private:
  struct ptr;

  struct node {
    T elem;
    ptr next{this};
    ptr prev{this};
  };

  static inline std::vector<node> storage;
  static inline std::queue<uint32_t> freelist;

  ptr head{this};
  ptr tail{this};

  struct ptr {
    std::variant<const listv<T> *, uint32_t> inner;

    operator bool() const { return inner.index() == 1; }

    uint32_t idx() const { return std::get<1>(inner); }

    std::string to_string() const {
      if (inner.index() == 0) {
        return "/";
      } else {
        return std::to_string(idx());
      }
    }

    ptr prev() const {
      if (inner.index() == 0) {
        return std::get<0>(inner)->tail;
      } else {
        return storage[idx()].prev;
      }
    }

    ptr next() const { return storage[idx()].next; }

    node &n() const { return storage[idx()]; }

    friend bool operator==(const ptr &l, const ptr &r) { return l.inner == r.inner; }

    T *operator->() const { return &n().elem; }

    T &operator*() const { return n().elem; }

    ptr &operator++() {
      if (inner.index() == 0) {
        printf("hole\n");
        fflush(stdout);
      }
      inner = storage[idx()].next;
      return *this;
    }

    ptr operator++(int) {
      ptr old = *this;
      operator++();
      return old;
    }

    ptr &operator--() {
      inner = prev();
      return *this;
    }

    ptr operator--(int) {
      ptr old = *this;
      operator--();
      return old;
    }
  };

public:
  using iterator = ptr;

  iterator begin() const { return head; }
  iterator end() const { return ptr{this}; }

  template <typename... Args> iterator emplace(const iterator &pos, Args &&...args) {
    ptr cur;
    ptr pos_prev = pos.prev();

    if (!freelist.empty()) {
      uint32_t f = freelist.front();
      cur = ptr{f};
      storage[f].next = pos;
      storage[f].prev = pos_prev;
      std::construct_at(&storage[f].elem, std::forward<Args>(args)...);
      freelist.pop();
    } else {
      cur = ptr{static_cast<uint32_t>(storage.size())};
      T elem{std::forward<Args>(args)...};
      storage.emplace_back(std::move(elem), pos, pos_prev);
    }

    if (pos) {
      pos.n().prev = cur;
      if (pos_prev) {
        pos_prev.n().next = cur;
      }
    } else {
      tail = cur;
    }

    if (head == pos) {
      head = cur;
    }

    return cur;
  }

  template <typename... Args> iterator emplace_back(Args &&...args) {
    return emplace(end(), std::forward<Args>(args)...);
  }

  void erase(const iterator &pos) {
    if (!pos) {
      return;
    }

    ptr pos_prev = pos.prev();
    ptr pos_next = pos.next();

    if (pos_prev) {
      pos_prev.n().next = pos_next;
    }

    if (pos_next) {
      pos_next.n().prev = pos_prev;
    }

    if (head == pos) {
      head = pos_next;
    }

    if (tail == pos) {
      tail = pos_prev;
    }

    freelist.push(pos.idx());
  }

  void splice(const iterator &pos, listv<T> &other, const iterator &first, const iterator &last) {
    if (!first) {
      return;
    }

    ptr old_last_prev = last.prev();

    // 1. Cut off [first, last)
    if (first.prev()) {
      first.prev().n().next = last;
    }

    if (last) {
      last.n().prev = first.prev();
    }

    if (other.head == first) {
      other.head = last;
    }

    // 2. Attach the segment to our list

    if (pos) {
      ptr pos_prev = pos.prev();
      first.n().prev = pos_prev;
      if (pos_prev) {
        pos_prev.n().next = first;
      }
      pos.n().prev = old_last_prev;
      if (old_last_prev) {
        old_last_prev.n().next = pos;
      }
    } else {
      first.n().prev = pos;
      if (old_last_prev) {
        old_last_prev.n().next = pos;
      }

      tail = old_last_prev;
    }

    if (pos == head) {
      head = first;
    }
  }

  void print() {
    printf("head: %s\n", head.to_string().c_str());
    for (int i = 0; i < storage.size(); i++) {
      printf("%s <-  %d  -> %s  |  %ld\n", storage[i].prev.to_string().c_str(), i, storage[i].next.to_string().c_str(),
             storage[i].elem);
    }
  }
};
