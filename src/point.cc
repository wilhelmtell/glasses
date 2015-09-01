#include "point.hh"
#include "positioned_rectangle.hh"

namespace {
bool bounding_top(tls::point const& p, tls::positioned_rectangle const& b) {
  return p.x >= top_left(b).x && p.x <= top_left(b).x + b.width()
         && p.y == top_left(b).y;
}

bool bounding_right(tls::point const& p, tls::positioned_rectangle const& b) {
  return p.x == top_left(b).x + b.width() && p.y >= top_left(b).y
         && p.y <= top_left(b).y + b.height();
}

bool bounding_bottom(tls::point const& p, tls::positioned_rectangle const& b) {
  return p.x >= top_left(b).x && p.x <= top_left(b).x + b.width()
         && p.y == top_left(b).y + b.height();
}

bool bounding_left(tls::point const& p, tls::positioned_rectangle const& b) {
  return p.x == top_left(b).x && p.y >= top_left(b).y
         && p.y <= top_left(b).y + b.height();
}
}

namespace tls {
point::point(int x, int y) : x{x}, y{y} {}

bool operator==(point const& lhs, point const& rhs) {
  return lhs.x == rhs.x && lhs.y == rhs.y;
}

bool operator!=(point const& lhs, point const& rhs) { return !(lhs == rhs); }

bool bounding(point const& p, positioned_rectangle const& b) {
  return bounding_top(p, b) || bounding_right(p, b) || bounding_bottom(p, b)
         || bounding_left(p, b);
}

bool outside(point const& p, positioned_rectangle const& b) {
  return p.x < top_left(b).x || p.x > top_left(b).x + b.width()
         || p.y < top_left(b).y || p.y > top_left(b).y + b.height();
}

bool inside(point const& p, positioned_rectangle const& b) {
  return !outside(p, b) && !bounding(p, b);
}
}
