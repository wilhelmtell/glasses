#include "width.hh"

namespace tls {
width::width(width::value_type value) : value{value} {}

width::operator value_type() const { return value; }
}
