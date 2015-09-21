#ifndef GLS_BASIC_LENGTH_TCC_
#define GLS_BASIC_LENGTH_TCC_

#include "basic_length.hh"

namespace gls {
namespace dim {
template <typename T>
basic_length<T>::basic_length(typename basic_length<T>::value_type value)
: value(value) {}

template <typename T>
basic_length<T>::operator value_type() const {
  return value;
}

template <typename T>
basic_length<T>& basic_length<T>::operator+=(
  typename basic_length<T>::value_type const& rhs) {
  value += rhs;
  return *this;
}

template <typename T>
basic_length<T>& basic_length<T>::operator-=(
  typename basic_length<T>::value_type const& rhs) {
  value -= rhs;
  return *this;
}

template <typename T>
basic_length<T>& basic_length<T>::operator*=(
  typename basic_length<T>::value_type const& rhs) {
  value *= rhs;
  return *this;
}

template <typename T>
basic_length<T>& basic_length<T>::operator/=(
  typename basic_length<T>::value_type const& rhs) {
  value /= rhs;
  return *this;
}

template <typename T>
basic_length<T> operator+(basic_length<T> lhs,
                          typename basic_length<T>::value_type const& rhs) {
  return lhs += rhs;
}

template <typename T>
basic_length<T> operator-(basic_length<T> lhs,
                          typename basic_length<T>::value_type const& rhs) {
  return lhs -= rhs;
}

template <typename T>
basic_length<T> operator*(basic_length<T> lhs,
                          typename basic_length<T>::value_type const& rhs) {
  return lhs *= rhs;
}

template <typename T>
basic_length<T> operator/(basic_length<T> lhs,
                          typename basic_length<T>::value_type const& rhs) {
  return lhs /= rhs;
}
}
}

#endif
