#ifndef GLS_BASIC_LENGTH_HH_
#define GLS_BASIC_LENGTH_HH_

namespace gls {
namespace dim {
template <typename T>
struct basic_length {
  using value_type = int;

  basic_length() = default;
  explicit basic_length(value_type value);

  operator value_type() const;

  basic_length& operator+=(typename basic_length::value_type const& rhs);
  basic_length& operator-=(typename basic_length::value_type const& rhs);
  basic_length& operator*=(typename basic_length::value_type const& rhs);
  basic_length& operator/=(typename basic_length::value_type const& rhs);

private:
  value_type value;
};

template <typename T>
basic_length<T> operator+(basic_length<T> lhs,
                          typename basic_length<T>::value_type const& rhs);
template <typename T>
basic_length<T> operator-(basic_length<T> lhs,
                          typename basic_length<T>::value_type const& rhs);
template <typename T>
basic_length<T> operator*(basic_length<T> lhs,
                          typename basic_length<T>::value_type const& rhs);
template <typename T>
basic_length<T> operator/(basic_length<T> lhs,
                          typename basic_length<T>::value_type const& rhs);
}
}

#include "basic_length.tcc"

#endif
