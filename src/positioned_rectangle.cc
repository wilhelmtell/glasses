#include "positioned_rectangle.hh"
#include <utility>
#include "width_t.hh"
#include "height_t.hh"
#include "point.hh"
#include <SDL2/SDL.h>

namespace gls {
positioned_rectangle::positioned_rectangle(point p, rectangle r)
: p(std::move(p)), r(std::move(r)) {}

point::value_type positioned_rectangle::x() const { return p.x(); }

point::value_type positioned_rectangle::y() const { return p.y(); }

width_t positioned_rectangle::width() const { return r.width(); }

height_t positioned_rectangle::height() const { return r.height(); }

bool operator==(positioned_rectangle const& lhs,
                positioned_rectangle const& rhs) {
  return top_left(lhs) == top_left(rhs) && lhs.width() == rhs.width()
         && lhs.height() == rhs.height();
}

bool operator!=(positioned_rectangle const& lhs,
                positioned_rectangle const& rhs) {
  return !(lhs == rhs);
}

bool intersect(positioned_rectangle const& a, positioned_rectangle const& b) {
  return inside(top_left(a), b) || inside(bottom_right(a), b)
         || bounding(top_left(a), b) || bounding(bottom_right(a), b);
}

bool outside(positioned_rectangle const& a, positioned_rectangle const& b) {
  return outside(top_left(a), b) && outside(bottom_right(a), b);
}

point top_left(positioned_rectangle const& r) { return r.p; }

point bottom_right(positioned_rectangle const& r) {
  return point{r.x() + r.width(), r.y() + r.height()};
}

positioned_rectangle q1_rectangle() {
  return positioned_rectangle(shifted_left(origin_point(), 1),
                              unit_rectangle());
}

positioned_rectangle q2_rectangle() {
  return positioned_rectangle(origin_point(), unit_rectangle());
}

positioned_rectangle q3_rectangle() {
  return positioned_rectangle(shifted_up(origin_point(), 1), unit_rectangle());
}

positioned_rectangle q4_rectangle() {
  return positioned_rectangle(shifted_up_left(origin_point(), 1),
                              unit_rectangle());
}

positioned_rectangle shifted_left(positioned_rectangle const& r,
                                  point::value_type const& offset) {
  return positioned_rectangle(shifted_left(top_left(r), offset),
                              rectangle(r.width(), r.height()));
}

positioned_rectangle shifted_right(positioned_rectangle const& r,
                                   point::value_type const& offset) {
  return positioned_rectangle(shifted_right(top_left(r), offset),
                              rectangle(r.width(), r.height()));
}

positioned_rectangle shifted_up(positioned_rectangle const& r,
                                point::value_type const& offset) {
  return positioned_rectangle(shifted_up(top_left(r), offset),
                              rectangle(r.width(), r.height()));
}

positioned_rectangle shifted_down(positioned_rectangle const& r,
                                  point::value_type const& offset) {
  return positioned_rectangle(shifted_down(top_left(r), offset),
                              rectangle(r.width(), r.height()));
}

positioned_rectangle shifted_up_left(positioned_rectangle const& r,
                                     point::value_type const& offset) {
  return positioned_rectangle(shifted_up_left(top_left(r), offset),
                              rectangle(r.width(), r.height()));
}

positioned_rectangle shifted_up_right(positioned_rectangle const& r,
                                      point::value_type const& offset) {
  return positioned_rectangle(shifted_up_right(top_left(r), offset),
                              rectangle(r.width(), r.height()));
}

positioned_rectangle shifted_down_left(positioned_rectangle const& r,
                                       point::value_type const& offset) {
  return positioned_rectangle(shifted_down_left(top_left(r), offset),
                              rectangle(r.width(), r.height()));
}

positioned_rectangle shifted_down_right(positioned_rectangle const& r,
                                        point::value_type const& offset) {
  return positioned_rectangle(shifted_down_right(top_left(r), offset),
                              rectangle(r.width(), r.height()));
}

SDL_Rect to_sdl_rect(positioned_rectangle const& r) {
  return {r.x(), r.y(), r.width(), r.height()};
}
}
