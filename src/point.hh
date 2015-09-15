#ifndef GLS_POINT_HH_
#define GLS_POINT_HH_

#include "positioned_rectangle_fwd.hh"

namespace gls {
struct point {
  point() = default;
  point(int x, int y);

  int x() const;
  int y() const;

private:
  int x_coordinate;
  int y_coordinate;
};

bool operator==(point const& lhs, point const& rhs);
bool operator!=(point const& lhs, point const& rhs);

bool bounding(point const& p, positioned_rectangle const& b);
bool outside(point const& p, positioned_rectangle const& b);
bool inside(point const& p, positioned_rectangle const& b);
}

#endif
