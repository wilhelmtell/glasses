#include "rectangle.hh"
#include <utility>
#include "width.hh"
#include "height.hh"

namespace gls {
rectangle::rectangle(dim::width w, dim::height h)
: w(std::move(w)), h(std::move(h)) {}

dim::width rectangle::width() const { return w; }

dim::height rectangle::height() const { return h; }

bool operator==(rectangle const& lhs, rectangle const& rhs) {
  return lhs.width() == rhs.width() && lhs.height() == rhs.height();
}

bool operator!=(rectangle const& lhs, rectangle const& rhs) {
  return !(lhs == rhs);
}

rectangle unit_rectangle() { return rectangle(dim::width(1), dim::height(1)); }
}
