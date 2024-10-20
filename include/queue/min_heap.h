#pragma once

#include <vector>

inline bool heap_is_root(size_t i) {
  return i == 1;
}

inline size_t heap_parent(size_t i) {
  // Heap index calculation assume array index starting from 1.
  return i / 2;
}

inline size_t heap_left_child(size_t i) {
  return i * 2;
}

inline size_t heap_right_child(size_t i) {
  return heap_left_child(i) + 1;
}

template<typename K, typename V, template <typename> typename Allocator = std::allocator>
struct MinHeap {
  using T = std::pair<K, V>;
  // maybe we should use a rootish array?
  std::vector<T, Allocator<T>> arr;

  MinHeap() {
    arr.reserve(16384);
    arr.push_back(T());
  }

  T& peek() {
    return (*this)[1];
  }

  const T& peek() const {
    return (*this)[1];
  }

  T pop() {
    auto val = remove_no_rebalance(1);
    if (!empty()) {
        sink(1);
    }
    return val;
  }

  void flow(size_t idx) {
    assert(has_value(idx));
    while (!heap_is_root(idx)) {
      size_t pidx = heap_parent(idx);
      if ((*this)[idx].first < (*this)[pidx].first) {
        swap(idx, pidx);
        idx = pidx;
      } else {
        return;
      }
    }
  }

  void sink(size_t idx) {
    while (true) {
      size_t a_child_idx = heap_left_child(idx);
      size_t b_child_idx = heap_right_child(idx);
      if (has_value(a_child_idx)) {
        size_t smaller_idx = [&](){
	  if (has_value(b_child_idx)) {
	    return ((*this)[a_child_idx].first < (*this)[b_child_idx].first) ? a_child_idx : b_child_idx;
	  } else {
	    return a_child_idx;
	  }
        }();
        if ((*this)[smaller_idx].first < (*this)[idx].first) {
          swap(idx, smaller_idx);
          idx = smaller_idx;
        } else {
          return;
        }
      } else {
        return;
      }
    }
  }

  void swap(const size_t& l, const size_t& r) {
    std::swap(arr[l], arr[r]);
  }

  bool empty() const {
    return arr.size() == 1;
  }

  size_t size() const {
    return arr.size() - 1;
  }

  void clear() {
    arr.clear();
  }

  template<typename K_, typename V_>
  void push(K_ && k, V_ && v) {
    auto last_index = arr.size();
    arr.push_back(std::pair<K, V>(std::forward<K_>(k), std::forward<V_>(v)));
    flow(last_index);
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
};
