#ifndef GLS_RECTANGLE_HH_
#define GLS_RECTANGLE_HH_

#include "rectangle_point_common.hh"

namespace gls {
template <typename T>
struct rectangle {
  T x;
  T y;
  T w;
  T h;
};

template <typename T>
rectangle<T> make_rectangle(T const& x, T const& y, T const& w, T const& h);

template <typename T>
rectangle<T> unit_rectangle();

template <typename T>
rectangle<T> q1_rectangle();

template <typename T>
rectangle<T> q2_rectangle();

template <typename T>
rectangle<T> q3_rectangle();

template <typename T>
rectangle<T> q4_rectangle();

template <typename T>
bool inside(rectangle<T> const& a, rectangle<T> const& b);

template <typename T>
bool outside(rectangle<T> const& a, rectangle<T> const& b);

template <typename T>
bool intersect(rectangle<T> const& a, rectangle<T> const& b);

template <typename T>
rectangle<T> wstretched(rectangle<T> const& r, int const& addition);

template <typename T>
rectangle<T> hstretched(rectangle<T> const& r, int const& addition);

template <typename T>
rectangle<T> wcompressed(rectangle<T> const& r, int const& subtraction);

template <typename T>
rectangle<T> hcompressed(rectangle<T> const& r, int const& subtraction);

template <typename T>
rectangle<T> shifted_left(rectangle<T> const& r, int const& offset);

template <typename T>
rectangle<T> shifted_right(rectangle<T> const& r, int const& offset);

template <typename T>
rectangle<T> shifted_up(rectangle<T> const& r, int const& offset);

template <typename T>
rectangle<T> shifted_down(rectangle<T> const& r, int const& offset);

template <typename T>
rectangle<T> shifted_up_left(rectangle<T> const& r, int const& offset);

template <typename T>
rectangle<T> shifted_up_right(rectangle<T> const& r, int const& offset);

template <typename T>
rectangle<T> shifted_down_left(rectangle<T> const& r, int const& offset);

template <typename T>
rectangle<T> shifted_down_right(rectangle<T> const& r, int const& offset);
}

#include "rectangle.tcc"

#endif
