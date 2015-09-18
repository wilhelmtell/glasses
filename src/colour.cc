#include "colour.hh"
#include <utility>

namespace gls {
colour::colour(value_type r, value_type g, value_type b, value_type a)
: r(std::move(r)), g(std::move(g)), b(std::move(b)), a(std::move(a)) {}

colour::value_type colour::red() const { return r; }

colour::value_type colour::green() const { return g; }

colour::value_type colour::blue() const { return b; }

colour::value_type colour::alpha() const { return a; }
}
