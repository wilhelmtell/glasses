#include "rectangle.hh"
#include <utility>
#include "width_t.hh"
#include "height_t.hh"

namespace gls {
rectangle::rectangle(width_t w, height_t h)
: w(std::move(w)), h(std::move(h)) {}

width_t rectangle::width() const { return w; }

height_t rectangle::height() const { return h; }

bool operator==(rectangle const& lhs, rectangle const& rhs) {
  return lhs.width() == rhs.width() && lhs.height() == rhs.height();
}

bool operator!=(rectangle const& lhs, rectangle const& rhs) {
  return !(lhs == rhs);
}

rectangle unit_rectangle() { return rectangle(width_t(1), height_t(1)); }

rectangle xstretched(rectangle const& r, width_t::value_type const& addition) {
  return rectangle(r.width() + addition, r.height());
}

rectangle ystretched(rectangle const& r, width_t::value_type const& addition) {
  return rectangle(r.width(), r.height() + addition);
}
}
