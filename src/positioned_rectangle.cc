#include "positioned_rectangle.hh"
#include <utility>
#include "dim/width.hh"
#include "dim/height.hh"
#include "point.hh"

namespace tls {
positioned_rectangle::positioned_rectangle(point p, rectangle r)
: p{std::move(p)}, r(std::move(r)) {}

point positioned_rectangle::top_left() const { return p; }

dim::width positioned_rectangle::width() const { return r.width(); }

dim::height positioned_rectangle::height() const { return r.height(); }

bool intersect(positioned_rectangle const& a, positioned_rectangle const& b) {
  return inside(a.top_left(), b) || inside(bottom_right(a), b)
         || crossing(a.top_left(), b) || crossing(bottom_right(a), b);
}

bool outside(positioned_rectangle const& a, positioned_rectangle const& b) {
  return outside(a.top_left(), b) && outside(bottom_right(a), b);
}

point bottom_right(positioned_rectangle const& r) {
  return point{r.top_left().x + r.width(), r.top_left().y + r.height()};
}
}
