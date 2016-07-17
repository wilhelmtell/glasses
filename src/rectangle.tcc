#ifndef GLS_RECTANGLE_TCC_
#define GLS_RECTANGLE_TCC_

#include "point.hh"
#include "rectangle.hh"

namespace gls {
template <typename T>
rectangle<T> make_rectangle(T const& x, T const& y, T const& w, T const& h) {
  return rectangle<T>{x, y, w, h};
}

template <typename T>
rectangle<T> unit_rectangle() {
  return rectangle<T>{0, 0, 1, 1};
}

template <typename T>
rectangle<T> q1_rectangle() {
  auto const p = shifted_left(origin_point<T>(), 1);
  auto const r = unit_rectangle<T>();
  return rectangle<T>{p.x, p.y, r.w, r.h};
}

template <typename T>
rectangle<T> q2_rectangle() {
  auto const p = origin_point<T>();
  auto const r = unit_rectangle<T>();
  return rectangle<T>{p.x, p.y, r.w, r.h};
}

template <typename T>
rectangle<T> q3_rectangle() {
  auto const p = shifted_up(origin_point<T>(), 1);
  auto const r = unit_rectangle<T>();
  return rectangle<T>{p.x, p.y, r.w, r.h};
}

template <typename T>
rectangle<T> q4_rectangle() {
  auto const p = shifted_up_left(origin_point<T>(), 1);
  auto const r = unit_rectangle<T>();
  return rectangle<T>{p.x, p.y, r.w, r.h};
}

template <typename T>
bool inside(rectangle<T> const& a, rectangle<T> const& b) {
  return inside(top_left(a), b) && inside(bottom_right(a), b)
         && inside(bottom_left(a), b) && inside(top_right(a), b);
}

template <typename T>
bool outside(rectangle<T> const& a, rectangle<T> const& b) {
  return outside(top_left(a), b) && outside(bottom_right(a), b)
         && outside(top_right(a), b) && outside(bottom_left(a), b);
}

template <typename T>
bool intersect(rectangle<T> const& a, rectangle<T> const& b) {
  return !outside(a, b) || !outside(b, a);
}

template <typename T>
rectangle<T> wstretched(rectangle<T> const& r, int const& addition) {
  return rectangle<T>{r.x, r.y, r.w + addition, r.h};
}

template <typename T>
rectangle<T> hstretched(rectangle<T> const& r, int const& addition) {
  return rectangle<T>{r.x, r.y, r.w, r.h + addition};
}

template <typename T>
rectangle<T> wcompressed(rectangle<T> const& r, int const& subtraction) {
  return rectangle<T>{r.x, r.y, r.w - subtraction, r.h};
}

template <typename T>
rectangle<T> hcompressed(rectangle<T> const& r, int const& subtraction) {
  return rectangle<T>{r.x, r.y, r.w, r.h - subtraction};
}

template <typename T>
rectangle<T> shifted_left(rectangle<T> const& r, int const& offset) {
  auto const p = shifted_left(top_left(r), offset);
  return rectangle<T>{p.x, p.y, r.w, r.h};
}

template <typename T>
rectangle<T> shifted_right(rectangle<T> const& r, int const& offset) {
  auto const p = shifted_right(top_left(r), offset);
  return rectangle<T>{p.x, p.y, r.w, r.h};
}

template <typename T>
rectangle<T> shifted_up(rectangle<T> const& r, int const& offset) {
  auto const p = shifted_up(top_left(r), offset);
  return rectangle<T>{p.x, p.y, r.w, r.h};
}

template <typename T>
rectangle<T> shifted_down(rectangle<T> const& r, int const& offset) {
  auto const p = shifted_down(top_left(r), offset);
  return rectangle<T>{p.x, p.y, r.w, r.h};
}

template <typename T>
rectangle<T> shifted_up_left(rectangle<T> const& r, int const& offset) {
  auto const p = shifted_up_left(top_left(r), offset);
  return rectangle<T>{p.x, p.y, r.w, r.h};
}

template <typename T>
rectangle<T> shifted_up_right(rectangle<T> const& r, int const& offset) {
  auto const p = shifted_up_right(top_left(r), offset);
  return rectangle<T>{p.x, p.y, r.w, r.h};
}

template <typename T>
rectangle<T> shifted_down_left(rectangle<T> const& r, int const& offset) {
  auto const p = shifted_down_left(top_left(r), offset);
  return rectangle<T>{p.x, p.y, r.w, r.h};
}

template <typename T>
rectangle<T> shifted_down_right(rectangle<T> const& r, int const& offset) {
  auto const p = shifted_down_right(top_left(r), offset);
  return rectangle<T>{p.x, p.y, r.w, r.h};
}
}

#endif
