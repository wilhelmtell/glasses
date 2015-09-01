#include "rectangle.hh"
#include <utility>
#include "width.hh"
#include "height.hh"
#include "point.hh"

namespace tls {
rectangle::rectangle(point p, width w, height h)
: p{std::move(p)}, w{std::move(w)}, h{std::move(h)} {}

bool intersect(rectangle const& a, rectangle const& b) {
  return inside(a.p, b) || inside(bottom_right(a), b) || crossing(a.p, b)
         || crossing(bottom_right(a), b);
}

bool outside(rectangle const& a, rectangle const& b) {
  return outside(a.p, b) && outside(bottom_right(a), b);
}

point bottom_right(rectangle const& r) {
  return point{r.p.x + r.w, r.p.y + r.h};
}
}
