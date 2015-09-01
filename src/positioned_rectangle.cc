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
  return inside(top_left(a), b) || inside(bottom_right(a), b)
         || crossing(top_left(a), b) || crossing(bottom_right(a), b);
}

bool outside(positioned_rectangle const& a, positioned_rectangle const& b) {
  return outside(top_left(a), b) && outside(bottom_right(a), b);
}

point top_left(positioned_rectangle const& r) { return r.top_left(); }

point bottom_right(positioned_rectangle const& r) {
  return point{top_left(r).x + r.width(), top_left(r).y + r.height()};
}
}
