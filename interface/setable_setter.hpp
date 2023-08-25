template <typename setter, typename settee>
concept setable = requires(setter a, settee &b) { a.setter(b); };
template <typename T, typename U>
void operator>>(T &a, U &b)
  requires(setable<T, U>)
{
  a.setter(b);
}