#include "point.hh"
#include "rectangle.hh"

namespace {
bool crossing_top_bound(tls::point const& p, tls::rectangle const& b) {
  return p.x >= b.p.x && p.x <= b.p.x + b.w && p.y == b.p.y;
}

bool crossing_right_bound(tls::point const& p, tls::rectangle const& b) {
  return p.x == b.p.x + b.w && p.y >= b.p.y && p.y <= b.p.y + b.h;
}

bool crossing_bottom_bound(tls::point const& p, tls::rectangle const& b) {
  return p.x >= b.p.x && p.x <= b.p.x + b.w && p.y == b.p.y + b.h;
}

bool crossing_left_bound(tls::point const& p, tls::rectangle const& b) {
  return p.x == b.p.x && p.y >= b.p.y && p.y <= b.p.y + b.h;
}
}

namespace tls {
point::point(int x, int y) : x{x}, y{y} {}

bool operator==(point const& lhs, point const& rhs) {
  return lhs.x == rhs.x && lhs.y == rhs.y;
}

bool operator!=(point const& lhs, point const& rhs) { return !(lhs == rhs); }

bool crossing(point const& p, rectangle const& b) {
  return crossing_top_bound(p, b) || crossing_right_bound(p, b)
         || crossing_bottom_bound(p, b) || crossing_left_bound(p, b);
}

bool outside(point const& p, rectangle const& b) {
  return p.x < b.p.x || p.x > b.p.x + b.w || p.y < b.p.y || p.y > b.p.y + b.h;
}

bool inside(point const& p, rectangle const& b) {
  return !outside(p, b) && !crossing(p, b);
}
}
