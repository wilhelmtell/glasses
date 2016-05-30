#ifndef GLS_POINT_HH_
#define GLS_POINT_HH_

#include "rectangle_point_common.hh"

namespace gls {
template <typename T>
struct point {
  T x;
  T y;
};

template <typename T>
point<T> make_point(T const& x, T const& y);

template <typename T>
bool operator==(point<T> const& lhs, point<T> const& rhs);

template <typename T>
bool operator!=(point<T> const& lhs, point<T> const& rhs);

template <typename T>
bool operator<(point<T> const& lhs, point<T> const& rhs);

template <typename T>
bool equal(point<T> const& lhs, point<T> const& rhs);

template <typename T>
bool not_equal(point<T> const& lhs, point<T> const& rhs);

template <typename T>
point<T> origin_point();

template <typename T, typename I>
point<T> shifted_up(point<T> const& p, I const& offset);

template <typename T, typename I>
point<T> shifted_down(point<T> const& p, I const& offset);

template <typename T, typename I>
point<T> shifted_left(point<T> const& p, I const& offset);

template <typename T, typename I>
point<T> shifted_right(point<T> const& p, I const& offset);

template <typename T, typename I>
point<T> shifted_down_left(point<T> const& p, I const& offset);

template <typename T, typename I>
point<T> shifted_down_right(point<T> const& p, I const& offset);

template <typename T, typename I>
point<T> shifted_up_left(point<T> const& p, I const& offset);

template <typename T, typename I>
point<T> shifted_up_right(point<T> const& p, I const& offset);
}

#include "point.tcc"

#endif
