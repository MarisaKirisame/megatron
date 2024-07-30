// Inspired by https://github.com/matthewhammer/ceal/blob/master/src/lib/runtime/totalorder.c
// Replaced the 2nd level singly linked list with doubly linked list
// Also made it more cpp native
// Requires C++23

#pragma once

#include <cstdint>
#include <type_traits>
#include <list>
#include <optional>
#include <vector>
#include <cassert>
#include <concepts>
#include <memory>
#include <cstring>

// Expected size: Tau^(-_label_bits) * 2^(_label_bits)
template <double Tau = 1.4, typename Label = std::uint64_t, template <typename> typename Allocator = std::allocator>
struct total_order
{
  static_assert(Tau > 1.0 && Tau < 2.0, "Tau must be greater than 1.0 and smaller than 2.0");
  static_assert(std::is_integral<Label>() && std::is_unsigned<Label>(), "Label must be an unsigned integer");

public:
  constexpr static std::size_t _label_bits = sizeof(Label) * 8;
  constexpr static std::size_t _list_size = _label_bits;
  constexpr static Label _max_label = static_cast<Label>(1) << (_label_bits - 1);
  constexpr static Label _gap_size = _max_label / _list_size;
  constexpr static Label _end_label = _max_label - _gap_size;

  typedef std::make_signed_t<Label> SignedLabel;

  struct _l1_node;
  struct _l2_node;

  struct _l1_node
  {
    std::list<_l2_node, Allocator<_l2_node>> children;
    Label label;
  };

  typedef std::list<_l1_node, Allocator<_l1_node>>::iterator _l1_iter;

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

    inline SignedLabel compare(const _l2_node &other) const
    {
      Label lpl = parent->label;
      Label rpl = other.parent->label;
      Label result1 = static_cast<Label>(label - other.label);
      Label result2 = static_cast<Label>(lpl - rpl);
      Label mask1 = static_cast<Label>(lpl == rpl) - 1;
      return static_cast<SignedLabel>((result1 & ~mask1) | (result2 & mask1));
    }
  };

  typedef std::list<_l2_node, Allocator<_l2_node>>::iterator _l2_iter;

  std::list<_l1_node, Allocator<_l1_node>> _l1_nodes;

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

      while (lo != _l1_nodes.begin() && prev_of(lo)->label >= lo_label && prev_of(lo)->label <= lo->label)
      {
        --lo;
        ++range_count;
      }

      while (next_of(hi) != _l1_nodes.end() && next_of(hi)->label <= hi_label && next_of(hi)->label >= hi->label)
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
    Label incr = (label_mask + 1) / range_count;

    // possibly overflowing check
    assert(incr != 0 && range_count != 0);

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
        auto next = next_of(cur1);
        Label next_label = 0;

        if (next != _l1_nodes.end() && next->label > prev_label)
        {
          next_label = next->label;
        }
        else
        {
          next_label = prev_label + 2;
        }

        _l1_iter new_node = _l1_nodes.emplace(next, std::list<_l2_node, Allocator<_l2_node>>(), prev_label);
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
        assert(*n < *m);
        return std::optional<_l2_iter>(m);
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
        assert(*m < *n);
        return std::optional<_l2_iter>(m);
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
    for (auto it = lo; it != hi;)
    {
      auto old = it;
      it = succ(it).value();
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

    inline SignedLabel compare(const _l2_iter_wrapper &other) const
    {
      return inner->compare(*other.inner);
    }
  };

  typedef _l2_iter_wrapper node;

  inline total_order()
  {
    auto n1 = _l1_nodes.emplace(_l1_nodes.end(), std::list<_l2_node, Allocator<_l2_node>>(), 0x0);
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

template <typename T>
concept Comparable = requires(const T a, const T b) {
  { a.compare(b) } -> std::signed_integral;
};

template <Comparable Key, typename Value, template <typename> typename Allocator = std::allocator>
class rb_tree
{
private:
  struct _rb_node
  {
    Key key;
    _rb_node *left;
    _rb_node *right;
    _rb_node *parent;
    unsigned char color;
    Value value;

    inline void set_black()
    {
      color = 0;
    }

    inline void set_red()
    {
      color = 1;
    }

    inline bool is_black() const
    {
      return color == 0;
    }

    inline bool is_red() const
    {
      return color == 1;
    }

    inline void copy_color(const _rb_node &n2)
    {
      color = n2.color;
    }
  };

  _rb_node *_root;
  _rb_node *_sentinel;
  Allocator<_rb_node> allocator;

  inline std::optional<_rb_node *> find(Key key) const
  {
    if (_root == _sentinel)
    {
      return std::optional<_rb_node *>();
    }

    for (_rb_node *temp = _root; temp != _sentinel;)
    {
      auto result = key.compare(temp->key);
      if (result < 0)
      {
        temp = temp->left;
      }
      else if (result > 0)
      {
        temp = temp->right;
      }
      else
      {
        return std::optional<_rb_node *>(temp);
      }
    }

    return std::optional<_rb_node *>();
  }

  inline std::optional<_rb_node *> min(_rb_node *node) const
  {
    while (node->left != _sentinel)
    {
      node = node->left;
    }

    return node;
  }

  inline void left_rotate(_rb_node *node)
  {
    _rb_node *temp = node->right;
    node->right = temp->left;

    if (temp->left != _sentinel)
    {
      temp->left->parent = node;
    }

    temp->parent = node->parent;

    if (node == _root)
    {
      _root = temp;
    }
    else if (node == node->parent->left)
    {
      node->parent->left = temp;
    }
    else
    {
      node->parent->right = temp;
    }

    temp->left = node;
    node->parent = temp;
  }

  inline void right_rotate(_rb_node *node)
  {
    _rb_node *temp = node->left;
    node->left = temp->right;

    if (temp->right != _sentinel)
    {
      temp->right->parent = node;
    }

    temp->parent = node->parent;

    if (node == _root)
    {
      _root = temp;
    }
    else if (node == node->parent->right)
    {
      node->parent->right = temp;
    }
    else
    {
      node->parent->left = temp;
    }

    temp->right = node;
    node->parent = temp;
  }

public:
  rb_tree()
  {
    _sentinel = allocator.allocate(1);
    memset(_sentinel, 0x0, sizeof(_rb_node));
    _sentinel->set_black();
    _root = _sentinel;
  }

  ~rb_tree()
  {
  }

  // returns Some when replaces an existing entry
  inline std::optional<Value> insert(Key key, Value value)
  {
    if (_root == _sentinel)
    {
      _rb_node *node = allocator.allocate(1);
      node->key = key;
      node->value = value;
      node->left = _sentinel;
      node->right = _sentinel;
      node->parent = nullptr;
      node->set_black();
      _root = node;
      return std::optional<Value>();
    }

    _rb_node *temp = _root;
    _rb_node **p;

    for (; temp != _sentinel; temp = *p)
    {
      auto result = key.compare(temp->key);
      if (result < 0)
      {
        p = &temp->left;
      }
      else if (result > 0)
      {
        p = &temp->right;
      }
      else
      {
        Value old = temp->value;
        temp->value = value;
        return std::optional<Value>(old);
      }
    }

    _rb_node *node = allocator.allocate(1);
    *p = node;
    node->key = key;
    node->value = value;
    node->left = _sentinel;
    node->right = _sentinel;
    node->parent = temp;
    node->set_red();

    while (node != _root && node->parent->is_red())
    {
      if (node->parent == node->parent->parent->left)
      {
        temp = node->parent->parent->right;

        if (temp->is_red())
        {
          node->parent->set_black();
          temp->set_black();
          node->parent->parent->set_red();
          node = node->parent->parent;
        }
        else
        {
          if (node == node->parent->right)
          {
            node = node->parent;
            left_rotate(node);
          }

          node->parent->set_black();
          node->parent->parent->set_red();
          right_rotate(node->parent->parent);
        }
      }
      else
      {
        temp = node->parent->parent->left;

        if (temp->is_red())
        {
          node->parent->set_black();
          temp->set_black();
          node->parent->parent->set_red();
          node = node->parent->parent;
        }
        else
        {
          if (node == node->parent->left)
          {
            node = node->parent;
            right_rotate(node);
          }

          node->parent->set_black();
          node->parent->parent->set_red();
          left_rotate(node->parent->parent);
        }
      }
    }

    _root->set_black();

    return std::optional<Value>();
  }

  inline std::optional<Value> at(Key key) const
  {
    return find(key).transform([](_rb_node *node)
                               { return node->value; });
  }

  inline void remove(Key key)
  {
    auto fr = find(key);
    if (!fr)
    {
      return;
    }
    _rb_node *node = fr.value();

    _rb_node *temp, *subst, *w;

    if (node->left == _sentinel)
    {
      temp = node->right;
      subst = node;
    }
    else if (node->right == _sentinel)
    {
      temp = node->left;
      subst = node;
    }
    else
    {
      subst = min(node->right).value();
      temp = subst->right;
    }

    if (subst == _root)
    {
      _root = temp;
      temp->set_black();

      // allocator.deallocate(node, 1);
      return;
    }

    bool red = subst->is_red();

    if (subst == subst->parent->left)
    {
      subst->parent->left = temp;
    }
    else
    {
      subst->parent->right = temp;
    }

    if (subst == node)
    {
      temp->parent = subst->parent;
    }
    else
    {
      if (subst->parent == node)
      {
        temp->parent = subst;
      }
      else
      {
        temp->parent = subst->parent;
      }

      subst->left = node->left;
      subst->right = node->right;
      subst->parent = node->parent;
      subst->copy_color(*node);

      if (node == _root)
      {
        _root = subst;
      }
      else
      {
        if (node == node->parent->left)
        {
          node->parent->left = subst;
        }
        else
        {
          node->parent->right = subst;
        }
      }

      if (subst->left != _sentinel)
      {
        subst->left->parent = subst;
      }

      if (subst->right != _sentinel)
      {
        subst->right->parent = subst;
      }
    }

    // allocator.deallocate(node, 1);

    if (red)
    {
      return;
    }

    while (temp != _root && temp->is_black())
    {
      if (temp == temp->parent->left)
      {
        w = temp->parent->right;

        if (w->is_red())
        {
          w->set_black();
          temp->parent->set_red();
          left_rotate(temp->parent);
          w = temp->parent->right;
        }

        if (w->left->is_black() && w->right->is_black())
        {
          w->set_red();
          temp = temp->parent;
        }
        else
        {
          if (w->right->is_black())
          {
            w->left->set_black();
            w->set_red();
            right_rotate(w);
            w = temp->parent->right;
          }

          w->copy_color(*temp->parent);
          temp->parent->set_black();
          w->right->set_black();
          left_rotate(temp->parent);
          temp = _root;
        }
      }
      else
      {
        w = temp->parent->left;
        if (w->is_red())
        {
          w->set_black();
          temp->parent->set_red();
          right_rotate(temp->parent);
          w = temp->parent->left;
        }

        if (w->left->is_black() && w->right->is_black())
        {
          w->set_red();
          temp = temp->parent;
        }
        else
        {
          if (w->left->is_black())
          {
            w->right->set_black();
            w->set_red();
            left_rotate(w);
            w = temp->parent->left;
          }

          w->copy_color(*temp->parent);
          temp->parent->set_black();
          w->left->set_black();
          right_rotate(temp->parent);
          temp = _root;
        }
      }
    }

    temp->set_black();
  }

  inline bool empty() const
  {
    return _root == _sentinel;
  }
};
