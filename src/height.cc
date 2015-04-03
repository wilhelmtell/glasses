#include "height.hh"

namespace tls {
height::height(height::value_type value) : value{value} {}

height::operator value_type() const { return value; }
}
