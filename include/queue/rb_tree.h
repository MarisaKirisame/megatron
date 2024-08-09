#pragma once

#include <concepts>
#include <memory>
#include <type_traits>

template <typename T>
concept three_way_comparable = std::is_copy_constructible_v<T> && requires(const T l, const T r) {
  { (l <=> r) < 0 } -> std::convertible_to<bool>;
  { (l <=> r) > 0 } -> std::convertible_to<bool>;
  { (l <=> r) == 0 } -> std::convertible_to<bool>;
};

// Stolen from linux rbtree
template <three_way_comparable Key, std::copy_constructible Value,
          template <typename> typename Allocator = std::allocator>
class rb_tree {
public:
  constexpr static size_t _color_red = 0;
  constexpr static size_t _color_black = 1;

  struct alignas(size_t) _rb_node {
    size_t parent_color;
    _rb_node *right;
    _rb_node *left;
    Key key;
    Value value;

    [[gnu::always_inline]]
    inline _rb_node *parent() const {
      return reinterpret_cast<_rb_node *>(parent_color & ~3);
    }

    // WARN: Only viable when color is red
    [[gnu::always_inline]]
    inline _rb_node *red_parent() const {
      return reinterpret_cast<_rb_node *>(parent_color);
    }

    [[gnu::always_inline]]
    inline size_t color() const {
      return parent_color & 1;
    }

    [[gnu::always_inline]]
    inline bool is_red() const {
      return color() == _color_red;
    }

    [[gnu::always_inline]]
    inline bool is_black() const {
      return color() == _color_black;
    }

    [[gnu::always_inline]]
    inline void set_parent(_rb_node *p) {
      parent_color = reinterpret_cast<size_t>(p) + color();
    }

    [[gnu::always_inline]]
    inline void set_parent_color(_rb_node *p, size_t c) {
      parent_color = reinterpret_cast<size_t>(p) + c;
    }

    [[gnu::always_inline]]
    inline void set_black() {
      parent_color += _color_black;
    }

    [[gnu::always_inline]]
    inline _rb_node *next() const {
      _rb_node *node = const_cast<_rb_node *>(this);

      if (node->right) {
        node = node->right;
        while (node->left) {
          node = node->left;
        }
        return node;
      }

      _rb_node *parent;

      while ((parent = node->parent()) && node == parent->right) {
        node = parent;
      }

      return parent;
    }
  };

  _rb_node *_root;
  _rb_node *_leftmost;
  size_t _size;
  Allocator<_rb_node> allocator;

  [[gnu::always_inline]]
  inline void change_child(_rb_node *old, _rb_node *neww, _rb_node *parent) {
    if (parent != nullptr) {
      if (parent->left == old) {
        parent->left = neww;
      } else {
        parent->right = neww;
      }
    } else {
      _root = neww;
    }
  }

  [[gnu::always_inline]]
  inline void rotate_set_parents(_rb_node *old, _rb_node *neww, size_t color) {
    _rb_node *parent = old->parent();
    neww->parent_color = old->parent_color;
    old->set_parent_color(neww, color);
    change_child(old, neww, parent);
  }

  [[gnu::always_inline]]
  inline void insert_color(_rb_node *node) {
    _rb_node *parent = node->red_parent();
    _rb_node *gparent, *tmp;

    while (true) {
      if (!parent) [[unlikely]] {
        node->set_parent_color(nullptr, _color_black);
        break;
      }

      if (parent->is_black()) {
        break;
      }

      gparent = parent->red_parent();

      tmp = gparent->right;
      if (parent != tmp) {
        if (tmp && tmp->is_red()) {
          // Case 1
          tmp->set_parent_color(gparent, _color_black);
          parent->set_parent_color(gparent, _color_black);
          node = gparent;
          parent = node->parent();
          node->set_parent_color(parent, _color_red);
          continue;
        }

        tmp = parent->right;
        if (node == tmp) {
          // Case 2
          tmp = node->left;
          parent->right = tmp;
          node->left = parent;
          if (tmp) {
            tmp->set_parent_color(parent, _color_black);
          }
          parent->set_parent_color(node, _color_red);
          parent = node;
          tmp = node->right;
        }

        // Case 3
        gparent->left = tmp;
        parent->right = gparent;
        if (tmp) {
          tmp->set_parent_color(gparent, _color_black);
        }
        rotate_set_parents(gparent, parent, _color_red);
        break;
      } else {
        tmp = gparent->left;
        if (tmp && tmp->is_red()) {
          // Case 1
          tmp->set_parent_color(gparent, _color_black);
          parent->set_parent_color(gparent, _color_black);
          node = gparent;
          parent = node->parent();
          node->set_parent_color(parent, _color_red);
          continue;
        }

        tmp = parent->left;
        if (node == tmp) {
          tmp = node->right;
          parent->left = tmp;
          node->right = parent;
          if (tmp) {
            tmp->set_parent_color(parent, _color_black);
          }
          parent->set_parent_color(node, _color_red);
          parent = node;
          tmp = node->left;
        }

        gparent->right = tmp;
        parent->left = gparent;
        if (tmp) {
          tmp->set_parent_color(gparent, _color_black);
        }

        rotate_set_parents(gparent, parent, _color_red);
        break;
      }
    }
  }

  [[gnu::always_inline]]
  inline _rb_node *find(const Key &key) const {
    _rb_node *node = _root;

    while (node) {
      auto c = key <=> node->key;

      if (c == 0) [[unlikely]] {
        return node;
      }

#if BOOST_ARCH_X86
      asm("cmp $0, %2\n"
          "cmovg 0x08(%0), %1\n"
          "cmovl 0x10(%0), %1\n"
          : "=r"(node)
          : "0"(node), "r"(c));
#else
      if (c < 0) {
        node = node->left;
      } else if (c > 0) {
        node = node->right;
      }
#endif
    }

    return nullptr;
  }

  [[gnu::always_inline]]
  inline _rb_node *erase(_rb_node *node) {
    _rb_node *child = node->right;
    _rb_node *tmp = node->left;
    _rb_node *parent, *rebalance;
    size_t pc;

    if (!tmp) {
      // Case 1
      pc = node->parent_color;
      parent = reinterpret_cast<_rb_node *>(pc & ~3);
      change_child(node, child, parent);
      if (child) {
        child->parent_color = pc;
        rebalance = nullptr;
      } else {
        rebalance = ((pc & 1) == _color_black) ? parent : nullptr;
      }
      tmp = parent;
    } else if (!child) {
      // Case 1: Inverted
      pc = node->parent_color;
      tmp->parent_color = pc;
      change_child(node, tmp, parent);
      rebalance = nullptr;
      tmp = parent;
    } else {
      _rb_node *successor = child, *child2;

      tmp = child->left;
      if (!tmp) {
        // Case 2
        parent = successor;
        child2 = successor->right;
      } else {
        // Case 3
        do {
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

      if (child2) {
        child2->set_parent_color(parent, _color_black);
        rebalance = nullptr;
      } else {
        rebalance = successor->is_black() ? parent : nullptr;
      }
      successor->parent_color = pc;
      tmp = successor;
    }

    return rebalance;
  }

  [[gnu::always_inline]]
  inline void erase_color(_rb_node *parent) {
    _rb_node *node = nullptr, *sibling, *tmp1, *tmp2;

    while (true) {
      sibling = parent->right;
      if (node != sibling) {
        if (sibling->is_red()) {
          // Case 1
          tmp1 = sibling->left;
          parent->right = tmp1;
          sibling->left = parent;
          tmp1->set_parent_color(parent, _color_black);
          rotate_set_parents(parent, sibling, _color_red);
          sibling = tmp1;
        }

        tmp1 = sibling->right;
        if (!tmp1 || tmp1->is_black()) {
          tmp2 = sibling->left;
          if (!tmp2 || tmp2->is_black()) {
            // Case 2
            sibling->set_parent_color(parent, _color_red);
            if (parent->is_red()) {
              parent->set_black();
            } else {
              node = parent;
              parent = node->parent();
              if (parent) {
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
          if (tmp1) {
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
        if (tmp2) {
          tmp2->set_parent(parent);
        }
        rotate_set_parents(parent, sibling, _color_black);
        break;
      } else {
        sibling = parent->left;
        if (sibling->is_red()) {
          // Case 1
          tmp1 = sibling->right;
          parent->left = tmp1;
          sibling->right = parent;
          tmp1->set_parent_color(parent, _color_black);
          rotate_set_parents(parent, sibling, _color_red);
          sibling = tmp1;
        }
        tmp1 = sibling->left;
        if (!tmp1 || tmp1->is_black()) {
          tmp2 = sibling->right;
          if (!tmp2 || tmp2->is_black()) {
            // Case 2
            sibling->set_parent_color(parent, _color_red);
            if (parent->is_red()) {
              parent->set_black();
            } else {
              node = parent;
              parent = node->parent();
              if (parent) {
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
          if (tmp1) {
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
        if (tmp2) {
          tmp2->set_parent(parent);
        }
        rotate_set_parents(parent, sibling, _color_black);
        break;
      }
    }
  }

public:
  rb_tree() {
    _root = nullptr;
    _leftmost = nullptr;
    _size = 0;
  }

  ~rb_tree() {
    while (!empty()) {
      erase(_leftmost->key);
    }
  }

  inline std::optional<Value> insert(const Key &key, Value &&value) {
    _rb_node **link = &_root;
    _rb_node *parent = nullptr;
    bool leftmost = true;

    while (*link != nullptr) {
      parent = *link;
      auto result = key <=> parent->key;
      if (result < 0) {
        link = &parent->left;
      } else if (result > 0) {
        link = &parent->right;
        leftmost = false;
      } else {
        Value old = parent->value;
        parent->value = value;
        return std::optional<Value>(old);
      }
    }

    _rb_node *node = allocator.allocate(1);
    std::construct_at(node, reinterpret_cast<size_t>(parent), nullptr, nullptr, key, std::move(value));
    *link = node;
    _size += 1;
    if (leftmost) {
      _leftmost = node;
    }
    insert_color(node);
    return std::optional<Value>();
  }

  [[gnu::always_inline]]
  inline std::optional<Value> at(const Key &key) const {
    _rb_node *node = find(key);
    if (node) {
      return std::optional<Value>(node->value);
    } else {
      return std::optional<Value>();
    }
  }

  [[gnu::always_inline]]
  inline bool empty() const {
    return _size == 0;
  }

  [[gnu::always_inline]]
  inline size_t size() const {
    return _size;
  }

  inline void erase(const Key &key) {
    _rb_node *node = find(key);
    if (!node) {
      return;
    }

    if (_leftmost == node) {
      _leftmost = node->next();
    }

    _rb_node *rebalance = erase(node);
    if (rebalance) {
      erase_color(rebalance);
    }

    _size -= 1;
    allocator.deallocate(node, 1);
  }

  [[gnu::always_inline]]
  inline std::optional<std::pair<Key, Value>> peek_lestmost() const {
    if (_leftmost) {
      return std::make_optional(std::make_pair(_leftmost->key, _leftmost->value));
    } else {
      return std::optional<std::pair<Key, Value>>();
    }
  }

  inline std::optional<std::pair<Key, Value>> pop_leftmost() {
    _rb_node *node = _leftmost;

    if (!node) {
      return std::optional<std::pair<Key, Value>>();
    }

    _leftmost = node->next();

    _rb_node *rebalance = erase(node);
    if (rebalance) {
      erase_color(rebalance);
    }

    std::optional<std::pair<Key, Value>> result =
        std::make_optional(std::make_pair(std::move(node->key), std::move(node->value)));

    _size -= 1;
    allocator.deallocate(node, 1);

    return result;
  }
};