#pragma once

#include <new>
#include <type_traits>

template <typename T> class no_destructor {
public:
  template <typename... Args,
            std::enable_if_t<!std::is_same_v<void(std::decay_t<Args> &...), void(no_destructor &)>, int> = 0>
  explicit constexpr no_destructor(Args &&...args) : impl(std::forward<Args>(args)...) {}

  explicit constexpr no_destructor(const T &x) : impl(x) {}
  explicit constexpr no_destructor(T &&x) : impl(std::move(x)) {}

  no_destructor(const no_destructor &) = delete;
  no_destructor &operator=(const no_destructor &) = delete;

  T *get() { return impl.get(); }
  T &operator*() { return *get(); }
  T *operator->() { return get(); }
  const T *get() const { return impl.get(); }
  const T &operator*() const { return *get(); }
  const T *operator->() const { return get(); }

private:
  class direct_impl {
  public:
    template <typename... Args> explicit constexpr direct_impl(Args &&...args) : value(std::forward<Args>(args)...) {}
    const T *get() const { return &value; }
    T *get() { return &value; }

  private:
    T value;
  };

  class placement_impl {
  public:
    template <typename... Args> explicit placement_impl(Args &&...args) { new (&space) T(std::forward<Args>(args)...); }
    const T *get() const { return std::launder(reinterpret_cast<const T *>(&space)); }
    T *get() { return std::launder(reinterpret_cast<T *>(&space)); }

  private:
    alignas(T) unsigned char space[sizeof(T)];
  };

  std::conditional_t<std::is_trivially_destructible<T>::value, direct_impl, placement_impl> impl;
};