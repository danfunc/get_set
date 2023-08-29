template <typename setter, typename settee>
concept setable = requires(setter a, settee &b) { a.setter(b); };
template <typename T, typename U>
T &operator>>(T &a, U &b)
  requires(setable<T, U>)
{
  a.setter(b);
  return a;
}