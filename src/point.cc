#include "point.hh"
#include "positioned_rectangle.hh"

namespace {
bool crossing_top_bound(tls::point const& p,
                        tls::positioned_rectangle const& b) {
  return p.x >= b.top_left().x && p.x <= b.top_left().x + b.width()
         && p.y == b.top_left().y;
}

bool crossing_right_bound(tls::point const& p,
                          tls::positioned_rectangle const& b) {
  return p.x == b.top_left().x + b.width() && p.y >= b.top_left().y
         && p.y <= b.top_left().y + b.height();
}

bool crossing_bottom_bound(tls::point const& p,
                           tls::positioned_rectangle const& b) {
  return p.x >= b.top_left().x && p.x <= b.top_left().x + b.width()
         && p.y == b.top_left().y + b.height();
}

bool crossing_left_bound(tls::point const& p,
                         tls::positioned_rectangle const& b) {
  return p.x == b.top_left().x && p.y >= b.top_left().y
         && p.y <= b.top_left().y + b.height();
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
  return p.x < b.top_left().x || p.x > b.top_left().x + b.width()
         || p.y < b.top_left().y || p.y > b.top_left().y + b.height();
}

bool inside(point const& p, positioned_rectangle const& b) {
  return !outside(p, b) && !crossing(p, b);
}
}
