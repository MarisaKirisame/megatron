#pragma once

#include <vector>

inline bool heap_is_root(size_t i) {
  return i == 0;
}

inline size_t heap_parent(size_t i) {
  // Heap index calculation assume array index starting from 1.
  return (i + 1) / 2 - 1;
}

inline size_t heap_left_child(size_t i) {
  return (i + 1) * 2 - 1;
}

inline size_t heap_right_child(size_t i) {
  return heap_left_child(i) + 1;
}

template<typename K, typename V, template <typename> typename Allocator = std::allocator>
struct MinHeap {
  using T = std::pair<K, V>;
  // maybe we should use a rootish array?
  std::vector<T, Allocator> arr;

  T& peek() {
    return (*this)[0];
  }

  const T& peek() const {
    return (*this)[0];
  }

  T pop() {
    return remove(0);
  }

  void flow(const size_t& idx) {
    assert(has_value(idx));
    if (!heap_is_root(idx)) {
      size_t pidx = heap_parent(idx);
      if ((*this)[idx].first < (*this)[pidx].first) {
        swap(idx, pidx);
      }
    }
  }

  void sink(const size_t& idx) {
    size_t a_child_idx = heap_left_child(idx);
    size_t b_child_idx = heap_right_child(idx);
    if (has_value(a_child_idx) || has_value(b_child_idx)) {
      size_t smaller_idx = [&](){
        if (!has_value(a_child_idx)) {
          return b_child_idx;
        } else if (!has_value(b_child_idx)) {
          return a_child_idx;
        } else {
          return ((*this)[a_child_idx].first < (*this)[b_child_idx].first) ? a_child_idx : b_child_idx;
        }
      }();
      if ((*this)[smaller_idx].first < (*this)[idx].first) {
        swap(idx, smaller_idx);
        sink(smaller_idx);
      }
    }
  }

  void rebalance(const size_t& idx) {
    assert(has_value(idx));
    flow(idx);
    sink(idx);
  }

  void swap(const size_t& l, const size_t& r) {
    std::swap(arr[l], arr[r]);
  }

  bool empty() const {
    return arr.empty();
  }

  size_t size() const {
    return arr.size();
  }

  void clear() {
    arr.clear();
  }

  template<typename K_, typename V_>
  void push(K_ && k, V_ && v) {
    arr.push_back(std::pair<K, V>(std::forward<K_>(k), std::forward<V_>(v)));
    flow(arr.size() - 1);
  }

  bool has_value(const size_t& idx) const {
    return idx < arr.size();
  }

  const T& operator[](const size_t& idx) const {
    assert(has_value(idx));
    return arr[idx];
  }

  T& operator[](const size_t& idx) {
    assert(has_value(idx));
    return arr[idx];
  }

  T remove_no_rebalance(const size_t& idx) {
    assert(has_value(idx));
    T ret = std::move(arr[idx]);
    swap(idx, arr.size() - 1);
    arr.pop_back();
    return ret;
  }

  T remove(const size_t& idx) {
    T ret = remove_no_rebalance(idx);
    if (idx < arr.size()) {
      rebalance(idx);
    }
    return ret;
  }
};