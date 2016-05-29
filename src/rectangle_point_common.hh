#ifndef GLS_RECTANGLE_POINT_COMMON_HH_
#define GLS_RECTANGLE_POINT_COMMON_HH_

#include "point_fwd.hh"
#include "rectangle_fwd.hh"

namespace gls {
template <typename T>
point<T> top_left(rectangle<T> const& r);

template <typename T>
point<T> bottom_right(rectangle<T> const& r);

template <typename T>
point<T> top_right(rectangle<T> const& r);

template <typename T>
point<T> bottom_left(rectangle<T> const& r);

template <typename T>
bool bounding(point<T> const& p, rectangle<T> const& b);

template <typename T>
bool outside(point<T> const& p, rectangle<T> const& b);

template <typename T>
bool inside(point<T> const& p, rectangle<T> const& b);

template <typename T>
bool at(rectangle<T> const& r, point<T> const& p);

template <typename T>
bool bounding_on_top(point<T> const& p, rectangle<T> const& b);

template <typename T>
bool bounding_on_right(point<T> const& p, rectangle<T> const& b);

template <typename T>
bool bounding_on_bottom(point<T> const& p, rectangle<T> const& b);

template <typename T>
bool bounding_on_left(point<T> const& p, rectangle<T> const& b);
}

#include "rectangle_point_common.tcc"

#endif
