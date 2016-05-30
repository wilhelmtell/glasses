#ifndef GLS_RECTANGLE_POINT_COMMON_TCC_
#define GLS_RECTANGLE_POINT_COMMON_TCC_

#include "rectangle_point_common.hh"

namespace gls {
template <typename T>
point<T> top_left(rectangle<T> const& r) {
  return point<T>{r.x, r.y};
}

template <typename T>
point<T> bottom_right(rectangle<T> const& r) {
  return point<T>{r.x + r.w, r.y + r.h};
}

template <typename T>
point<T> top_right(rectangle<T> const& r) {
  return point<T>{r.x + r.w, r.y};
}

template <typename T>
point<T> bottom_left(rectangle<T> const& r) {
  return point<T>{r.x, r.y + r.h};
}

template <typename T>
bool bounding(point<T> const& p, rectangle<T> const& b) {
  return bounding_on_top(p, b) || bounding_on_right(p, b)
         || bounding_on_bottom(p, b) || bounding_on_left(p, b);
}

template <typename T>
bool outside(point<T> const& p, rectangle<T> const& b) {
  return p.x < b.x || p.x > b.x + b.w || p.y < b.y || p.y > b.y + b.h;
}

template <typename T>
bool inside(point<T> const& p, rectangle<T> const& b) {
  return !outside(p, b);
}

template <typename T>
bool at(rectangle<T> const& r, point<T> const& p) {
  return r.x == p.x && r.y == p.y;
}

template <typename T>
bool bounding_on_top(point<T> const& p, rectangle<T> const& b) {
  return p.x >= b.x && p.x <= b.x + b.w && p.y == b.y;
}

template <typename T>
bool bounding_on_right(point<T> const& p, rectangle<T> const& b) {
  return p.x == b.x + b.w && p.y >= b.y && p.y <= b.y + b.h;
}

template <typename T>
bool bounding_on_bottom(point<T> const& p, rectangle<T> const& b) {
  return p.x >= b.x && p.x <= b.x + b.w && p.y == b.y + b.h;
}

template <typename T>
bool bounding_on_left(point<T> const& p, rectangle<T> const& b) {
  return p.x == b.x && p.y >= b.y && p.y <= b.y + b.h;
}
}

#endif
