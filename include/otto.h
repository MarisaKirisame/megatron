#pragma once

#include "listv.h"
#include <boost/predef.h>
#include <cassert>
#include <concepts>
#include <optional>
#include <type_traits>

// Inspired by https://github.com/matthewhammer/ceal/blob/master/src/lib/runtime/totalorder.c
// Replaced the 2nd level singly linked list with doubly linked list
// Requires C++23
// Expected size: Tau^(-_label_bits) * 2^(_label_bits)
template <double Tau = 1.4, typename Label = std::uint64_t, template <typename> typename Allocator = std::allocator>
struct total_order {
  static_assert(Tau > 1.0 && Tau < 2.0, "Tau must be greater than 1.0 and smaller than 2.0");
  static_assert(std::is_integral<Label>() && std::is_unsigned<Label>(), "Label must be an unsigned integer");

public:
  constexpr static std::size_t _label_bits = sizeof(Label) * 8;
  constexpr static std::size_t _list_size = _label_bits;
  constexpr static Label _max_label = static_cast<Label>(1) << (_label_bits - 1);
  constexpr static Label _gap_size = _max_label / _list_size;
  constexpr static Label _end_label = _max_label - _gap_size;

  using SignedLabel = std::make_signed_t<Label>;

  struct _l1_node;
  struct _l2_node;

  struct _l1_node {
    listv<_l2_node> children;
    Label label;
  };

  typedef listv<_l1_node>::iterator _l1_iter;

  struct _l2_node {
    _l1_iter parent;
    Label label;

    [[gnu::always_inline]]
    friend inline bool operator<(const _l2_node &l, const _l2_node &r) {
      Label lpl = l.parent->label;
      Label rpl = r.parent->label;

#if BOOST_ARCH_X86
      size_t result1 = l.label < r.label;
      size_t result = 0;

      asm volatile("xor %%rax, %%rax\n"
                   "cmp %1, %2\n"
                   "seta %%al\n"
                   "cmove %3, %%rax\n"
                   : "=&a"(result)
                   : "r"(lpl), "r"(rpl), "r"(result1));

      return result;
#else
      Label result1 = static_cast<Label>(l.label < r.label);
      Label result2 = static_cast<Label>(lpl < rpl);
      Label mask1 = static_cast<Label>(lpl == rpl) - 1;
      return ((result1 & ~mask1) | (result2 & mask1));
#endif
    }

    [[gnu::always_inline]]
    friend inline bool operator==(const _l2_node &l, const _l2_node &r) {
      Label lpl = l.parent->label;
      Label rpl = r.parent->label;
      return lpl == rpl && l.label == r.label;
    }

    [[gnu::always_inline]]
    friend inline SignedLabel operator<=>(const _l2_node &l, const _l2_node &r) {
      Label lpl = l.parent->label;
      Label rpl = r.parent->label;
      SignedLabel result1 = static_cast<SignedLabel>(l.label - r.label);
      SignedLabel result2 = static_cast<SignedLabel>(lpl - rpl);

#if BOOST_ARCH_X86
      SignedLabel result;

      asm volatile("cmp %1, %2\n"
                   "cmove %3, %0\n"
                   "cmovne %4, %0\n"
                   : "=&r"(result)
                   : "r"(lpl), "r"(rpl), "r"(result1), "r"(result2));

      return result;
#else
      SignedLabel mask1 = static_cast<SignedLabel>(lpl == rpl) - 1;
      return ((result1 & ~mask1) | (result2 & mask1));
#endif
    }
  };

  typedef listv<_l2_node>::iterator _l2_iter;

  listv<_l1_node> _l1_nodes;

  [[gnu::always_inline]]
  inline void balance_l1(_l1_iter n) {
    auto lo = n, hi = n;
    Label lo_label, hi_label, range_count = 1, label_mask = 1;

    // (i) find smallest non-overflowing tag-range
    double tau = 1.0 / Tau;
    Label base_label = n->label;
    double density;

    while (true) {
      lo_label = base_label & (~label_mask);
      hi_label = lo_label | label_mask;

      while (true) {
        auto prev = lo.prev();
        if (lo == _l1_nodes.begin() || prev->label < lo_label || prev->label > lo->label) {
          break;
        }
        lo = prev;
        ++range_count;
      }

      while (true) {
        auto next = hi.next();
        if (next == _l1_nodes.end() || next->label > hi_label || next->label < hi->label) {
          break;
        }
        hi = next;
        ++range_count;
      }

      density = static_cast<double>(range_count) / (label_mask + 1);
      if (density < tau || ((label_mask >> (_label_bits - 1)) & 1) == 1) {
        // we found the smallest tag-range that is not in overflow
        // or we have reached the top and have to stop here :(
        break;
      } else {
        label_mask = (label_mask << 1) | 1;
        tau /= Tau;
      }
    }

    // (ii) relabel
    _l1_iter cur = lo;
    Label label = lo_label;
    Label incr = (label_mask + 1) / range_count;

    // possibly overflowing check
    assert(incr != 0 && range_count != 0);

    while (true) {
      cur->label = label;
      if (cur == hi) {
        break;
      }
      ++cur;
      label += incr;
    }
  }

  [[gnu::always_inline]]
  inline void balance_l2(_l1_iter cur1) {
    auto cur2 = cur1->children.begin();
    while (cur2 != cur1->children.end()) {
      Label num = 0;

      while (num < _end_label && cur2 != cur1->children.end()) {
        cur2->parent = cur1;
        cur2->label = num;

        num += _gap_size;
        ++cur2;
      }

      // we have some leftover l2 nodes
      if (cur2 != cur1->children.end()) {
        Label prev_label = cur1->label;
        auto next = cur1.next();
        Label next_label = 0;

        if (next != _l1_nodes.end() && next->label > prev_label) {
          next_label = next->label;
        } else {
          next_label = prev_label + 2;
        }

        _l1_iter new_node = _l1_nodes.emplace(next, listv<_l2_node>(), prev_label);
        new_node->children.splice(new_node->children.end(), cur1->children, cur2, cur1->children.end());

        if (prev_label + 1 == next_label) {
          balance_l1(new_node);
        } else {
          new_node->label = (prev_label + next_label) >> 1;
        }

        cur1 = new_node;
      }
    }
  }

  [[gnu::always_inline]]
  inline _l2_iter insert(_l2_iter n) {
    Label next_label;
    _l2_iter nextn = n.next();
    if (nextn != n->parent->children.end()) {
      next_label = nextn->label;
    } else {
      next_label = _max_label;
    }

    auto new_node = n->parent->children.emplace(nextn, n->parent, std::min((n->label + next_label) >> 1, n->label + 64));

    if (n->label == new_node->label) {
      balance_l2(n->parent);
    }

    return new_node;
  }

  [[gnu::always_inline]]
  inline std::optional<_l2_iter> succ(_l2_iter n) {
    if (n.next() != n->parent->children.end()) {
      return std::optional<_l2_iter>(n.next());
    } else {
      if (n->parent.next() != _l1_nodes.end()) {
        _l2_iter m = n->parent.next()->children.begin();
        assert(*n < *m);
        return std::optional<_l2_iter>(m);
      } else {
        return std::optional<_l2_iter>();
      }
    }
  }

  [[gnu::always_inline]]
  inline std::optional<_l2_iter> prev(_l2_iter n) {
    if (n != n->parent->children.begin()) {
      return std::optional<_l2_iter>(prev_of(n));
    } else {
      if (n->parent != _l1_nodes.begin()) {
        _l2_iter m = n->parent.prev()->children.end().prev();
        assert(*m < *n);
        return std::optional<_l2_iter>(m);
      } else {
        return std::optional<_l2_iter>();
      }
    }
  }

  [[gnu::always_inline]]
  inline void remove(_l2_iter n) {
    if (n->parent->children.size() == 1) {
      _l1_nodes.erase(n->parent);
    } else {
      n->parent->children.erase(n);
    }
  }

  [[gnu::always_inline]]
  inline void remove(_l2_iter lo, _l2_iter hi) {
    for (auto it = lo; it != hi;) {
      auto old = it;
      it = succ(it).value();
      remove(old);
    }
  }

public:
  struct _l2_iter_wrapper {
    _l2_iter inner;

    [[gnu::always_inline]]
    friend inline bool operator<(const _l2_iter_wrapper &l, const _l2_iter_wrapper &r) {
      return *l.inner < *r.inner;
    }

    [[gnu::always_inline]]
    friend inline bool operator==(const _l2_iter_wrapper &l, const _l2_iter_wrapper &r) {
      return *l.inner == *r.inner;
    }

    [[gnu::always_inline]]
    friend inline SignedLabel operator<=>(const _l2_iter_wrapper &l, const _l2_iter_wrapper &r) {
      return *l.inner <=> *r.inner;
    }
  };

  typedef _l2_iter_wrapper node;

  inline total_order() {
    auto n1 = _l1_nodes.emplace(_l1_nodes.end(), listv<_l2_node>(), 0x0);
    n1->children.emplace_back(n1, 0x0);
  }

  [[gnu::always_inline]]
  inline node smallest() {
    return node{_l1_nodes.begin()->children.begin()};
  }

  [[gnu::always_inline]]
  inline std::optional<node> prev(node n) {
    return prev(n.inner).transform([](_l2_iter c) { return node{c}; });
  }

  [[gnu::always_inline]]
  inline std::optional<node> succ(node n) {
    return succ(n.inner).transform([](_l2_iter c) { return node{c}; });
  }

  [[gnu::always_inline]]
  inline node insert(node n) {
    return node{insert(n.inner)};
  }

  [[gnu::always_inline]]
  inline void remove(node n) {
    remove(n.inner);
  }

  [[gnu::always_inline]]
  inline void remove(node lo, node hi) {
    remove(lo.inner, hi.inner);
  }
};
