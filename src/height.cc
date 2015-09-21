#include "height.hh"

namespace gls {
namespace dim {
height::height(height::value_type value) : value(value) {}

height::operator value_type() const { return value; }

height& height::operator+=(height::value_type const& rhs) {
  value += rhs;
  return *this;
}

height& height::operator-=(height::value_type const& rhs) {
  value -= rhs;
  return *this;
}

height& height::operator*=(height::value_type const& rhs) {
  value *= rhs;
  return *this;
}

height& height::operator/=(height::value_type const& rhs) {
  value /= rhs;
  return *this;
}

height operator+(height lhs, height::value_type const& rhs) {
  return lhs += rhs;
}

height operator-(height lhs, height::value_type const& rhs) {
  return lhs -= rhs;
}

height operator*(height lhs, height::value_type const& rhs) {
  return lhs *= rhs;
}

height operator/(height lhs, height::value_type const& rhs) {
  return lhs /= rhs;
}
}
}
