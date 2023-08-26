#ifndef GET_SET_HPP
#define GET_SET_HPP
#include "getable_getter.hpp"
#include "setable_setter.hpp"
template <typename T> class get_set {
protected:
  T payload = T();

public:
  get_set(){};
  ~get_set(){};
  virtual void getter(T input) { this->payload = input; };
  virtual void setter(T &output) { output = this->payload; };
};
#endif