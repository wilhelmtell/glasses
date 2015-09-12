#include "height.hh"

namespace gls {
namespace dim {
height::height(height::value_type value) : value{value} {}

height::operator value_type() const { return value; }
}
}
