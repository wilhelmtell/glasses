#ifndef GLS_POINT_TCC_
#define GLS_POINT_TCC_

#include "point.hh"

namespace gls {
template <typename T>
point<T> make_point(T const& x, T const& y) {
  return point<T>{x, y};
}

template <typename T>
bool operator==(point<T> const& lhs, point<T> const& rhs) {
  return lhs.x == rhs.x && lhs.y == rhs.y;
}

template <typename T>
bool operator!=(point<T> const& lhs, point<T> const& rhs) {
  return !(lhs == rhs);
}

template <typename T>
bool operator<(point<T> const& lhs, point<T> const& rhs) {
  return (lhs.x < rhs.x) || (lhs.x == rhs.x && lhs.y < rhs.y);
}

template <typename T>
bool operator<=(point<T> const& lhs, point<T> const& rhs) {
  return !(rhs < lhs);
}

template <typename T>
bool operator>(point<T> const& lhs, point<T> const& rhs) {
  return rhs < lhs;
}

template <typename T>
bool operator>=(point<T> const& lhs, point<T> const& rhs) {
  return !(lhs < rhs);
}

template <typename T>
bool equal(point<T> const& lhs, point<T> const& rhs) {
  return lhs == rhs;
}

template <typename T>
bool not_equal(point<T> const& lhs, point<T> const& rhs) {
  return !equal(lhs, rhs);
}

template <typename T>
point<T> origin_point() {
  return point<T>{};
}

template <typename T, typename I>
point<T> shifted_up(point<T> const& p, I const& offset) {
  return point<T>{p.x, p.y - offset};
}

template <typename T, typename I>
point<T> shifted_down(point<T> const& p, I const& offset) {
  return point<T>{p.x, p.y + offset};
}

template <typename T, typename I>
point<T> shifted_left(point<T> const& p, I const& offset) {
  return point<T>{p.x - offset, p.y};
}

template <typename T, typename I>
point<T> shifted_right(point<T> const& p, I const& offset) {
  return point<T>{p.x + offset, p.y};
}

template <typename T, typename I>
point<T> shifted_down_left(point<T> const& p, I const& offset) {
  return point<T>{p.x - offset, p.y + offset};
}

template <typename T, typename I>
point<T> shifted_down_right(point<T> const& p, I const& offset) {
  return point<T>{p.x + offset, p.y + offset};
}

template <typename T, typename I>
point<T> shifted_up_left(point<T> const& p, I const& offset) {
  return point<T>{p.x - offset, p.y - offset};
}

template <typename T, typename I>
point<T> shifted_up_right(point<T> const& p, I const& offset) {
  return point<T>{p.x + offset, p.y - offset};
}
}

#endif
