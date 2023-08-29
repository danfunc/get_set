#ifndef GETTABLE_GETTER_HPP
#define GETTABLE_GETTER_HPP
template <typename getter, typename source>
concept getable = requires(getter &a, source b) { a.getter(b); };
template <typename T, typename U>
T &operator<<(T &a, U b)
  requires(getable<T, U>)
{
  a.getter(b);
  return a;
}
#endif