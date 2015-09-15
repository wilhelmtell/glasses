#ifndef GLS_POINT_HH_
#define GLS_POINT_HH_

#include "positioned_rectangle_fwd.hh"

namespace gls {
struct point {
  using value_type = int;

  point() = default;
  point(value_type x, value_type y);

  value_type x() const;
  value_type y() const;

private:
  value_type x_coordinate;
  value_type y_coordinate;
};

bool operator==(point const& lhs, point const& rhs);
bool operator!=(point const& lhs, point const& rhs);

bool bounding(point const& p, positioned_rectangle const& b);
bool outside(point const& p, positioned_rectangle const& b);
bool inside(point const& p, positioned_rectangle const& b);
}

#endif
