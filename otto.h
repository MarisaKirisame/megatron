// Inspired by https://github.com/matthewhammer/ceal/blob/master/src/lib/runtime/totalorder.c
// Replaced the 2nd level singly linked list with doubly linked list
// Also made it more cpp native
// Requires C++23

#pragma once

#include <cstdint>
#include <type_traits>
#include <list>
#include <optional>

#include <cassert>

// Expected size: Tau^(-_label_bits) * 2^(_label_bits)
template <double Tau = 1.4, typename Label = std::uint64_t>
class total_order
{
  static_assert(Tau > 1.0 && Tau < 2.0, "Tau must be greater than 1.0 and smaller than 2.0");
  static_assert(std::is_integral<Label>() && std::is_unsigned<Label>(), "Label must be an unsigned integer");

public:
  constexpr static std::size_t _label_bits = sizeof(Label) * 8;
  constexpr static std::size_t _list_size = _label_bits;
  constexpr static Label _max_label = static_cast<Label>(1) << (_label_bits - 1);
  constexpr static Label _gap_size = _max_label / _list_size;
  constexpr static Label _end_label = _max_label - _gap_size;

private:
  struct _l1_node;
  struct _l2_node;

  typedef std::list<_l1_node>::iterator _l1_iter;
  typedef std::list<_l2_node>::iterator _l2_iter;

  struct _l1_node
  {
    std::list<_l2_node> children;
    Label label;
  };

  struct _l2_node
  {
    _l1_iter parent;
    Label label;

    friend inline bool operator<(const _l2_node &l, const _l2_node &r)
    {
      Label lpl = l.parent->label;
      Label rpl = r.parent->label;
      Label result1 = static_cast<Label>(l.label < r.label);
      Label result2 = static_cast<Label>(lpl < rpl);
      Label mask1 = static_cast<Label>(lpl == rpl) - 1;
      return (result1 & ~mask1) | (result2 & mask1);
    }

    friend inline bool operator==(const _l2_node &l, const _l2_node &r)
    {
      Label lpl = l.parent->label;
      Label rpl = r.parent->label;
      return lpl == rpl && l.label == r.label;
    }
  };

  std::list<_l1_node> _l1_nodes;

  template <typename T>
  T prev_of(T it)
  {
    T copy = it;
    copy--;
    return copy;
  }

  template <typename T>
  T next_of(T it)
  {
    T copy = it;
    copy++;
    return copy;
  }

  inline void balance_l1(_l1_iter n)
  {
    auto lo = n, hi = n;
    Label lo_label, hi_label, range_count = 1, label_mask = 1;

    // (i) find smallest non-overflowing tag-range
    double tau = 1.0 / Tau;
    Label base_label = n->label;
    double density;

    while (true)
    {
      lo_label = base_label & (~label_mask);
      hi_label = lo_label | label_mask;

      while (prev_of(lo)->label >= lo_label && prev_of(lo)->label <= lo->label)
      {
        --lo;
        ++range_count;
      }

      while (next_of(hi)->label <= hi_label && next_of(hi)->label >= hi->label)
      {
        ++hi;
        ++range_count;
      }

      density = static_cast<double>(range_count) / (label_mask + 1);
      if (density < tau || ((label_mask >> (_label_bits - 1)) & 1) == 1)
      {
        // we found the smallest tag-range that is not in overflow
        // or we have reached the top and have to stop here :(
        break;
      }
      else
      {
        label_mask = (label_mask << 1) | 1;
        tau /= Tau;
      }
    }

    // (ii) relabel
    _l1_iter cur = lo;
    Label label = lo_label;
    assert(range_count != 0);
    Label incr = (label_mask + 1) / range_count;

    // possibly overflowing check
    assert(incr != 0);

    while (true)
    {
      cur->label = label;
      if (cur == hi)
      {
        break;
      }
      ++cur;
      label += incr;
    }
  }

  inline void balance_l2(_l1_iter cur1)
  {
    auto cur2 = cur1->children.begin();
    while (cur2 != cur1->children.end())
    {
      Label num = 0;

      while (num < _end_label && cur2 != cur1->children.end())
      {
        cur2->parent = cur1;
        cur2->label = num;

        num += _gap_size;
        ++cur2;
      }

      // we have some leftover l2 nodes
      if (cur2 != cur1->children.end())
      {
        Label prev_label = cur1->label;
        Label next_label = (next_of(cur1)->label > prev_label) ? next_of(cur1)->label : prev_label + 2;

        _l1_iter new_node = _l1_nodes.emplace(next_of(cur1), std::list<_l2_node>(), prev_label);
        new_node->children.splice(new_node->children.end(), cur1->children, cur2, cur1->children.end());

        if (prev_label + 1 == next_label)
        {
          balance_l1(new_node);
        }
        else
        {
          new_node->label = (prev_label + next_label) >> 1;
        }

        cur1 = new_node;
      }
    }
  }

  inline _l2_iter insert(_l2_iter n)
  {
    Label next_label;
    if (next_of(n) != n->parent->children.end())
    {
      next_label = next_of(n)->label;
    }
    else
    {
      next_label = _max_label;
    }

    auto new_node = n->parent->children.emplace(next_of(n), n->parent, (n->label + next_label) >> 1);

    if (n->label == new_node->label)
    {
      balance_l2(n->parent);
    }

    return new_node;
  }

  inline std::optional<_l2_iter> succ(_l2_iter n)
  {
    if (next_of(n) != n->parent->children.end())
    {
      return std::optional<_l2_iter>(next_of(n));
    }
    else
    {
      if (next_of(n->parent) != _l1_nodes.end())
      {
        _l2_iter m = next_of(n->parent)->children.begin();
        if (*n < *m)
        {
          return std::optional<_l2_iter>(m);
        }
        else
        {
          return std::optional<_l2_iter>();
        }
      }
      else
      {
        return std::optional<_l2_iter>();
      }
    }
  }

  inline std::optional<_l2_iter> prev(_l2_iter n)
  {
    if (n != n->parent->children.begin())
    {
      return std::optional<_l2_iter>(prev_of(n));
    }
    else
    {
      if (n->parent != _l1_nodes.begin())
      {
        _l2_iter m = prev_of(prev_of(n->parent)->children.end());
        if (*m < *n)
        {
          return std::optional<_l2_iter>(m);
        }
        else
        {
          return std::optional<_l2_iter>();
        }
      }
      else
      {
        return std::optional<_l2_iter>();
      }
    }
  }

  inline void remove(_l2_iter n)
  {
    if (n->parent->children.size() == 1)
    {
      _l1_nodes.erase(n->parent);
    }
    else
    {
      n->parent->children.erase(n);
    }
  }

  inline void remove(_l2_iter lo, _l2_iter hi)
  {
    for (auto it = lo; it != hi; )
    {
      auto old = it;
      auto next = succ(it);
      if (next)
      {
        it = next.value();
      }
      else
      {
        // we reached the end?
        it = hi;
      }
      remove(old);
    }
  }

public:
  struct _l2_iter_wrapper
  {
    _l2_iter inner;

    friend inline bool operator<(const _l2_iter_wrapper &l, const _l2_iter_wrapper &r)
    {
      return *l.inner < *r.inner;
    }

    friend inline bool operator==(const _l2_iter_wrapper &l, const _l2_iter_wrapper &r)
    {
      return *l.inner == *r.inner;
    }
  };

  typedef _l2_iter_wrapper node;

  inline total_order()
  {
    auto n1 = _l1_nodes.emplace(_l1_nodes.end(), std::list<_l2_node>(), 0x0);
    n1->children.emplace_back(n1, 0x0);
  }

  inline node smallest()
  {
    return node{_l1_nodes.begin()->children.begin()};
  }

  inline std::optional<node> prev(node n)
  {
    return prev(n.inner).transform([](_l2_iter c)
                                   { return node{c}; });
  }

  inline std::optional<node> succ(node n)
  {
    return succ(n.inner).transform([](_l2_iter c)
                                   { return node{c}; });
  }

  inline node insert(node n)
  {
    return node{insert(n.inner)};
  }

  inline void remove(node n)
  {
    remove(n.inner);
  }

  inline void remove(node lo, node hi)
  {
    remove(lo.inner, hi.inner);
  }
};
