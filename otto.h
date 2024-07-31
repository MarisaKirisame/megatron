#pragma once

#include <list>
#include <optional>
#include <concepts>

// Inspired by https://github.com/matthewhammer/ceal/blob/master/src/lib/runtime/totalorder.c
// Replaced the 2nd level singly linked list with doubly linked list
// Requires C++23
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

    friend inline std::strong_ordering operator<=>(const _l2_node &l, const _l2_node &r)
    {
      Label lpl = l.parent->label;
      Label rpl = r.parent->label;
      // Label result1 = static_cast<Label>(label - other.label);
      // Label result2 = static_cast<Label>(lpl - rpl);
      // Label mask1 = static_cast<Label>(lpl == rpl) - 1;
      // return static_cast<SignedLabel>((result1 & ~mask1) | (result2 & mask1));
      if (lpl == rpl)
      {
        return l.label <=> r.label;
      }
      else
      {
        return lpl <=> rpl;
      }
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

      while (true)
      {
        auto prev = prev_of(lo);
        if (lo == _l1_nodes.begin() || prev->label < lo_label || prev->label > lo->label)
        {
          break;
        }
        lo = prev;
        ++range_count;
      }

      while (true)
      {
        auto next = next_of(hi);
        if (next == _l1_nodes.end() || next->label > hi_label || next->label < hi->label)
        {
          break;
        }
        hi = next;
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

    friend inline std::strong_ordering operator<=>(const _l2_iter_wrapper &l, const _l2_iter_wrapper &r)
    {
      return *l.inner <=> *r.inner;
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


// Stolen from linux rbtree
template <std::totally_ordered Key, std::copy_constructible Value, template <typename> typename Allocator = std::allocator>
class rb_tree
{
private:
  constexpr static size_t _color_red = 0;
  constexpr static size_t _color_black = 1;

  struct alignas(size_t) _rb_node
  {
    size_t parent_color;
    _rb_node *right;
    _rb_node *left;
    Key key;
    Value value;

    inline _rb_node *parent() const
    {
      return reinterpret_cast<_rb_node *>(parent_color & ~3);
    }

    // WARN: Only viable when color is red
    inline _rb_node *red_parent() const
    {
      return reinterpret_cast<_rb_node *>(parent_color);
    }

    inline size_t color() const
    {
      return parent_color & 1;
    }

    inline bool is_red() const
    {
      return color() == _color_red;
    }

    inline bool is_black() const
    {
      return color() == _color_black;
    }

    inline void set_parent(_rb_node *p)
    {
      parent_color = reinterpret_cast<size_t>(p) + color();
    }

    inline void set_parent_color(_rb_node *p, size_t c)
    {
      parent_color = reinterpret_cast<size_t>(p) + c;
    }

    inline void set_black()
    {
      parent_color += _color_black;
    }

    inline _rb_node *next() const
    {
      _rb_node *node = const_cast<_rb_node *>(this);

      if (node->right)
      {
        node = node->right;
        while (node->left)
        {
          node = node->left;
        }
        return node;
      }

      _rb_node *parent;

      while ((parent = node->parent()) && node == parent->right)
      {
        node = parent;
      }

      return parent;
    }
  };

  _rb_node *_root;
  _rb_node *_leftmost;
  Allocator<_rb_node> allocator;

  [[gnu::always_inline]]
  inline void change_child(_rb_node *old, _rb_node *neww, _rb_node *parent)
  {
    if (parent != nullptr)
    {
      if (parent->left == old)
      {
        parent->left = neww;
      }
      else
      {
        parent->right = neww;
      }
    }
    else
    {
      _root = neww;
    }
  }

  [[gnu::always_inline]]
  inline void rotate_set_parents(_rb_node *old, _rb_node *neww, size_t color)
  {
    _rb_node *parent = old->parent();
    neww->parent_color = old->parent_color;
    old->set_parent_color(neww, color);
    change_child(old, neww, parent);
  }

  [[gnu::always_inline]]
  inline void insert_color(_rb_node *node)
  {
    _rb_node *parent = node->red_parent();
    _rb_node *gparent, *tmp;

    while (true)
    {
      if (!parent) [[unlikely]]
      {
        node->set_parent_color(nullptr, _color_black);
        break;
      }

      if (parent->is_black())
      {
        break;
      }

      gparent = parent->red_parent();

      tmp = gparent->right;
      if (parent != tmp)
      {
        if (tmp && tmp->is_red())
        {
          // Case 1
          tmp->set_parent_color(gparent, _color_black);
          parent->set_parent_color(gparent, _color_black);
          node = gparent;
          parent = node->parent();
          node->set_parent_color(parent, _color_red);
          continue;
        }

        tmp = parent->right;
        if (node == tmp)
        {
          // Case 2
          tmp = node->left;
          parent->right = tmp;
          node->left = parent;
          if (tmp)
          {
            tmp->set_parent_color(parent, _color_black);
          }
          parent->set_parent_color(node, _color_red);
          parent = node;
          tmp = node->right;
        }

        // Case 3
        gparent->left = tmp;
        parent->right = gparent;
        if (tmp)
        {
          tmp->set_parent_color(gparent, _color_black);
        }
        rotate_set_parents(gparent, parent, _color_red);
        break;
      }
      else
      {
        tmp = gparent->left;
        if (tmp && tmp->is_red())
        {
          // Case 1
          tmp->set_parent_color(gparent, _color_black);
          parent->set_parent_color(gparent, _color_black);
          node = gparent;
          parent = node->parent();
          node->set_parent_color(parent, _color_red);
          continue;
        }

        tmp = parent->left;
        if (node == tmp)
        {
          tmp = node->right;
          parent->left = tmp;
          node->right = parent;
          if (tmp)
          {
            tmp->set_parent_color(parent, _color_black);
          }
          parent->set_parent_color(node, _color_red);
          parent = node;
          tmp = node->left;
        }

        gparent->right = tmp;
        parent->left = gparent;
        if (tmp)
        {
          tmp->set_parent_color(gparent, _color_black);
        }

        rotate_set_parents(gparent, parent, _color_red);
        break;
      }
    }
  }

  [[gnu::always_inline]]
  inline _rb_node *find(const Key &key) const
  {
    _rb_node *node = _root;

    while (node)
    {
      auto c = key <=> node->key;
      if (c < 0)
      {
        node = node->left;
      }
      else if (c > 0)
      {
        node = node->right;
      }
      else
      {
        return node;
      }
    }

    return nullptr;
  }

  [[gnu::always_inline]]
  inline _rb_node *erase(_rb_node *node)
  {
    _rb_node *child = node->right;
    _rb_node *tmp = node->left;
    _rb_node *parent, *rebalance;
    size_t pc;

    if (!tmp)
    {
      // Case 1
      pc = node->parent_color;
      parent = reinterpret_cast<_rb_node *>(pc & ~3);
      change_child(node, child, parent);
      if (child)
      {
        child->parent_color = pc;
        rebalance = nullptr;
      }
      else
      {
        rebalance = ((pc & 1) == _color_black) ? parent : nullptr;
      }
      tmp = parent;
    }
    else if (!child)
    {
      // Case 1: Inverted
      pc = node->parent_color;
      tmp->parent_color = pc;
      change_child(node, tmp, parent);
      rebalance = nullptr;
      tmp = parent;
    }
    else
    {
      _rb_node *successor = child, *child2;

      tmp = child->left;
      if (!tmp)
      {
        // Case 2
        parent = successor;
        child2 = successor->right;
      }
      else
      {
        // Case 3
        do
        {
          parent = successor;
          successor = tmp;
          tmp = tmp->left;
        } while (tmp);
        child2 = successor->right;
        parent->left = child2;
        successor->right = child;
        child->set_parent(successor);
      }

      tmp = node->left;
      successor->left = tmp;
      tmp->set_parent(successor);

      pc = node->parent_color;
      tmp = reinterpret_cast<_rb_node *>(pc & ~3);
      change_child(node, successor, tmp);

      if (child2)
      {
        child2->set_parent_color(parent, _color_black);
        rebalance = nullptr;
      }
      else
      {
        rebalance = successor->is_black() ? parent : nullptr;
      }
      successor->parent_color = pc;
      tmp = successor;
    }

    return rebalance;
  }

  [[gnu::always_inline]]
  inline void erase_color(_rb_node *parent)
  {
    _rb_node *node = nullptr, *sibling, *tmp1, *tmp2;

    while (true)
    {
      sibling = parent->right;
      if (node != sibling)
      {
        if (sibling->is_red())
        {
          // Case 1
          tmp1 = sibling->left;
          parent->right = tmp1;
          sibling->left = parent;
          tmp1->set_parent_color(parent, _color_black);
          rotate_set_parents(parent, sibling, _color_red);
          sibling = tmp1;
        }

        tmp1 = sibling->right;
        if (!tmp1 || tmp1->is_black())
        {
          tmp2 = sibling->left;
          if (!tmp2 || tmp2->is_black())
          {
            // Case 2
            sibling->set_parent_color(parent, _color_red);
            if (parent->is_red())
            {
              parent->set_black();
            }
            else
            {
              node = parent;
              parent = node->parent();
              if (parent)
              {
                continue;
              }
            }
            break;
          }

          // Case 3
          tmp1 = tmp2->right;
          sibling->left = tmp1;
          tmp2->right = sibling;
          parent->right = tmp2;
          if (tmp1)
          {
            tmp1->set_parent_color(sibling, _color_black);
          }
          tmp1 = sibling;
          sibling = tmp2;
        }

        // Case 4
        tmp2 = sibling->left;
        parent->right = tmp2;
        sibling->left = parent;
        tmp1->set_parent_color(sibling, _color_black);
        if (tmp2)
        {
          tmp2->set_parent(parent);
        }
        rotate_set_parents(parent, sibling, _color_black);
        break;
      }
      else
      {
        sibling = parent->left;
        if (sibling->is_red())
        {
          // Case 1
          tmp1 = sibling->right;
          parent->left = tmp1;
          sibling->right = parent;
          tmp1->set_parent_color(parent, _color_black);
          rotate_set_parents(parent, sibling, _color_red);
          sibling = tmp1;
        }
        tmp1 = sibling->left;
        if (!tmp1 || tmp1->is_black())
        {
          tmp2 = sibling->right;
          if (!tmp2 || tmp2->is_black())
          {
            // Case 2
            sibling->set_parent_color(parent, _color_red);
            if (parent->is_red())
            {
              parent->set_black();
            }
            else
            {
              node = parent;
              parent = node->parent();
              if (parent)
              {
                continue;
              }
            }
            break;
          }

          // Case 3
          tmp1 = tmp2->left;
          sibling->right = tmp1;
          tmp2->left = sibling;
          parent->left = tmp2;
          if (tmp1)
          {
            tmp1->set_parent_color(sibling, _color_black);
          }
          tmp1 = sibling;
          sibling = tmp2;
        }

        // Case 4
        tmp2 = sibling->right;
        parent->left = tmp2;
        sibling->right = parent;
        tmp1->set_parent_color(sibling, _color_black);
        if (tmp2)
        {
          tmp2->set_parent(parent);
        }
        rotate_set_parents(parent, sibling, _color_black);
        break;
      }
    }
  }

public:
  rb_tree()
  {
    _root = nullptr;
    _leftmost = nullptr;
  }

  ~rb_tree()
  {
    while (!empty())
    {
      erase(_leftmost->key);
    }
  }

  inline std::optional<Value> insert(const Key &key, const Value &value)
  {
    _rb_node **link = &_root;
    _rb_node *parent = nullptr;
    bool leftmost = true;

    while (*link != nullptr)
    {
      parent = *link;
      auto result = key <=> parent->key;
      if (result < 0)
      {
        link = &parent->left;
      }
      else if (result > 0)
      {
        link = &parent->right;
        leftmost = false;
      }
      else
      {
        Value old = parent->value;
        parent->value = value;
        return std::optional<Value>(old);
      }
    }

    _rb_node *node = allocator.allocate(1);
    node->key = key;
    node->value = value;
    node->parent_color = reinterpret_cast<size_t>(parent);
    node->left = nullptr;
    node->right = nullptr;
    *link = node;
    if (leftmost)
    {
      _leftmost = node;
    }
    insert_color(node);
    return std::optional<Value>();
  }

  inline std::optional<Value> at(const Key &key) const
  {
    _rb_node *node = find(key);
    if (node)
    {
      return std::optional<Value>(node->value);
    }
    else
    {
      return std::optional<Value>();
    }
  }

  inline bool empty() const
  {
    return _root == nullptr;
  }

  inline void erase(const Key &key)
  {
    _rb_node *node = find(key);
    if (!node)
    {
      return;
    }

    if (_leftmost == node)
    {
      _leftmost = node->next();
    }

    _rb_node *rebalance = erase(node);
    if (rebalance)
    {
      erase_color(rebalance);
    }

    allocator.deallocate(node, 1);
  }

  inline std::optional<std::pair<Key, Value>> lestmost() const
  {
    if (_leftmost)
    {
      return std::make_optional(std::make_pair(_leftmost->key, _leftmost->value));
    }
    else
    {
      return std::optional<std::pair<Key, Value>>();
    }
  }
};
