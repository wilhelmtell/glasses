#include "width.hh"

namespace gls {
namespace dim {
width::width(width::value_type value) : value(value) {}

width::operator value_type() const { return value; }

width& width::operator+=(width::value_type const& rhs) {
  value += rhs;
  return *this;
}

width& width::operator-=(width::value_type const& rhs) {
  value -= rhs;
  return *this;
}

width& width::operator*=(width::value_type const& rhs) {
  value *= rhs;
  return *this;
}

width& width::operator/=(width::value_type const& rhs) {
  value /= rhs;
  return *this;
}
}
}
