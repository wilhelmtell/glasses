#include "rectangle.hh"
#include <utility>
#include "width_t.hh"
#include "height.hh"

namespace gls {
rectangle::rectangle(width_t w, dim::height h)
: w(std::move(w)), h(std::move(h)) {}

width_t rectangle::width() const { return w; }

dim::height rectangle::height() const { return h; }

bool operator==(rectangle const& lhs, rectangle const& rhs) {
  return lhs.width() == rhs.width() && lhs.height() == rhs.height();
}

bool operator!=(rectangle const& lhs, rectangle const& rhs) {
  return !(lhs == rhs);
}

rectangle unit_rectangle() { return rectangle(width_t(1), dim::height(1)); }

rectangle xstretched(rectangle const& r, width_t::value_type const& addition) {
  return rectangle(r.width() + addition, r.height());
}

rectangle ystretched(rectangle const& r, width_t::value_type const& addition) {
  return rectangle(r.width(), r.height() + addition);
}
}
