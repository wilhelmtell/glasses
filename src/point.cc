#include "point.hh"
#include "positioned_rectangle.hh"

namespace {
bool crossing_top_bound(tls::point const& p,
                        tls::positioned_rectangle const& b) {
  return p.x >= top_left(b).x && p.x <= top_left(b).x + b.width()
         && p.y == top_left(b).y;
}

bool crossing_right_bound(tls::point const& p,
                          tls::positioned_rectangle const& b) {
  return p.x == top_left(b).x + b.width() && p.y >= top_left(b).y
         && p.y <= top_left(b).y + b.height();
}

bool crossing_bottom_bound(tls::point const& p,
                           tls::positioned_rectangle const& b) {
  return p.x >= top_left(b).x && p.x <= top_left(b).x + b.width()
         && p.y == top_left(b).y + b.height();
}

bool crossing_left_bound(tls::point const& p,
                         tls::positioned_rectangle const& b) {
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

bool crossing(point const& p, positioned_rectangle const& b) {
  return crossing_top_bound(p, b) || crossing_right_bound(p, b)
         || crossing_bottom_bound(p, b) || crossing_left_bound(p, b);
}

bool outside(point const& p, positioned_rectangle const& b) {
  return p.x < top_left(b).x || p.x > top_left(b).x + b.width()
         || p.y < top_left(b).y || p.y > top_left(b).y + b.height();
}

bool inside(point const& p, positioned_rectangle const& b) {
  return !outside(p, b) && !crossing(p, b);
}
}
