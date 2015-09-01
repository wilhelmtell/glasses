#include "positioned_rectangle.hh"
#include <utility>
#include "dim/width.hh"
#include "dim/height.hh"
#include "point.hh"

namespace tls {
positioned_rectangle::positioned_rectangle(point p,
                                           dim::width w,
                                           dim::height h)
: p{std::move(p)}, w{std::move(w)}, h{std::move(h)} {}

bool intersect(positioned_rectangle const& a, positioned_rectangle const& b) {
  return inside(a.p, b) || inside(bottom_right(a), b) || crossing(a.p, b)
         || crossing(bottom_right(a), b);
}

bool outside(positioned_rectangle const& a, positioned_rectangle const& b) {
  return outside(a.p, b) && outside(bottom_right(a), b);
}

point bottom_right(positioned_rectangle const& r) {
  return point{r.p.x + r.w, r.p.y + r.h};
}
}
