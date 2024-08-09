#pragma once

#include <cassert>
#include <memory>

template<typename K, typename V, template <typename> typename Allocator = std::allocator>
struct SplayList {
  struct Node {
    K k;
    V v;

    Node* list_parent;
    Node* list_children;

    Node* splay_parent;
    mutable std::array<Node*, 2> splay_children = {nullptr, nullptr};

    Node(const K& k, const V& v, Node* list_parent, Node* list_children, Node* splay_parent, SplayList& sl) :
      k(k), v(v), list_parent(list_parent), list_children(list_children), splay_parent(splay_parent) {
      if (list_parent != nullptr) {
        assert(list_parent->list_children == list_children);
        assert(list_parent->k < k);
        list_parent->list_children = this;
      } else {
        sl.leftmost_node = this;
      }

      if (list_children != nullptr) {
        assert(list_children->list_parent == list_parent);
        assert(list_children->k > k);
        list_children->list_parent = this;
      } else {
        sl.rightmost_node = this;
      }
      ++sl.size;
    }

    size_t idx_at_parent() const {
      assert(splay_parent != nullptr);
      return splay_parent->splay_children[0] == this ? 0 : 1;
    }

    void splay_maintain_children_parent(size_t idx) {
      if (splay_children[idx] != nullptr) {
        splay_children[idx]->splay_parent = this;
      }
    }

    void swap_children(size_t idx, Node* node, size_t nidx) {
      std::swap(this->splay_children[idx], node->splay_children[nidx]);
      this->splay_maintain_children_parent(idx);
      node->splay_maintain_children_parent(nidx);
    }

    void remove(SplayList& sl) {
      if (splay_children[0] == nullptr) {
        if (splay_children[1] != nullptr) {
          splay_children[1]->splay_parent = splay_parent;
        }
        if (splay_parent == nullptr) {
          sl.root_node = splay_children[1];
        } else {
          splay_parent->splay_children[idx_at_parent()] = splay_children[1];
        }
      } else {
        assert (splay_children[0] != nullptr);
        splay_children[0]->splay_parent = splay_parent;
        if (splay_children[1] != nullptr) {
          splay_children[0]->splay_parent = splay_parent;
          list_parent->splay(splay_children[0]);
          assert(splay_children[0]->splay_children[1] == nullptr);
          splay_children[0]->splay_children[1] = splay_children[1];
          splay_children[0]->splay_maintain_children_parent(1);
        }
        if (splay_parent == nullptr) {
          sl.root_node = splay_children[0];
        } else {
          splay_parent->splay_children[idx_at_parent()] = splay_children[0];
        }
      }

      if (list_parent == nullptr) {
        assert(sl.leftmost_node == this);
        sl.leftmost_node = list_children;
      } else {
        list_parent->list_children = list_children;
      }

      if (list_children == nullptr) {
        assert(sl.rightmost_node == this);
        sl.rightmost_node = list_parent;
      } else {
        list_children->list_parent = list_parent;
      }

      sl.allocator.deallocate(this, 1);
      --sl.size;
    }

    void rotate(Node*& root_node) {
      assert(splay_parent != nullptr);
      auto splay_parent_backup = splay_parent;
      size_t idx = idx_at_parent();
      if (splay_parent->splay_parent != nullptr) {
        splay_parent->splay_parent->swap_children(splay_parent->idx_at_parent(), splay_parent, idx);
      } else {
        assert(splay_parent == root_node);
        std::swap(root_node, splay_parent->splay_children[idx]);
        splay_parent = nullptr;
      }
      splay_parent_backup->swap_children(idx, this, idx^1);
    }

    void splay(Node*& root_node) {
      while (splay_parent != nullptr) {
        if (splay_parent->splay_parent != nullptr) {
          if (idx_at_parent() == splay_parent->idx_at_parent()) {
            splay_parent->rotate(root_node);
          } else {
            rotate(root_node);
          }
        }
        rotate(root_node);
      }

      assert(this == root_node);
    }

  };

  Allocator<Node> allocator;
  mutable Node* root_node = nullptr;
  Node* leftmost_node = nullptr;
  Node* rightmost_node = nullptr;
  size_t size = 0;

  ~SplayList() {
    Node* ptr = leftmost_node;
    while (ptr != rightmost_node) {
      Node* old = ptr;
      ptr = ptr->list_children;
      allocator.deallocate(old, 1);
    }
    if (ptr != nullptr) {
      allocator.deallocate(ptr, 1);
    }
  }

  // return either the node with the key, or the last node seen.
  // return nullptr if the tree is empty.
  Node* find_node_without_splay(const K& k) {
    Node* last_ptr = nullptr;
    Node* ptr = root_node;
    while (ptr != nullptr) {
      if (ptr->k == k) {
        return ptr;
      } else {
        size_t idx = k < ptr->k ? 0 : 1;
        last_ptr = ptr;
        ptr = ptr->splay_children[idx];
      }
    }
    return last_ptr;
  }

  // return largest node <= k, or smallest node >= k.
  // note that when matching value found the two case collapse into one.
  // on empty splay tree return nulllptr.
  Node* find_node(const K& k) {
    Node* ret = find_node_without_splay(k);
    if (ret != nullptr) {
      ret->splay(this->root_node);
    }
    return ret;
  }

  Node* find_precise_node(const K& k) {
    Node* ptr = find_node(k);
    return (ptr == nullptr || ptr->k != k) ? nullptr : ptr;
  }

  V* find_precise(const K& k) {
    Node* ptr = find_precise_node(k);
    return ptr == nullptr ? nullptr : &(ptr->v);
  }

  bool has_precise(const K& k) {
    Node* ptr = find_node(k);
    return ptr != nullptr && ptr->k == k;
  }

  void remove_precise(const K& k) {
    Node* ptr = find_precise_node(k);
    if (ptr != nullptr) {
      ptr->remove(*this);
    }
  }

  std::pair<K, V> peek() {
    assert(leftmost_node != nullptr);
    return std::make_pair(leftmost_node->k, leftmost_node->v);
  }

  std::pair<K, V> pop() {
    assert(leftmost_node != nullptr);
    auto ret = std::make_pair(std::move(leftmost_node->k), std::move(leftmost_node->v));
    leftmost_node->remove(*this);
    return ret;
  }


  void insert(const K& k, const V& v) {
    Node* ptr = find_node_without_splay(k);
    if (ptr != nullptr) {
      if (ptr->k < k) {
        assert(ptr->splay_children[1] == nullptr);
        if (ptr->list_children != nullptr) {
          assert(rightmost_node != nullptr);
        }
        ptr->splay_children[1] = std::construct_at(allocator.allocate(1), k, v, ptr, ptr->list_children, ptr, *this);
      } else if (k < ptr->k) {
        assert(ptr->splay_children[0] == nullptr);
        ptr->splay_children[0] = std::construct_at(allocator.allocate(1), k, v, ptr->list_parent, ptr, ptr, *this);
      } else {
        assert (ptr->k == k);
        ptr->v = v;
      }
      ptr->splay(this->root_node);
    } else {
      root_node = std::construct_at(allocator.allocate(1), k, v, nullptr, nullptr, nullptr, *this);
    }
  }

  void debug_display_splay_helper(Node* node, int indent) {
    for (int i = 0; i < indent; i++) {
      putchar(' ');
    }

    if (node == nullptr) {
      puts("null");
    } else {
      printf("%d\n", node->k);
      debug_display_splay_helper(node->splay_children[0], indent + 2);
      debug_display_splay_helper(node->splay_children[1], indent + 2);
    }
  }

  void debug_display_splay() {
    debug_display_splay_helper(root_node, 0);
  }
};
