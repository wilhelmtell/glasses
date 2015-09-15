#ifndef GLS_POSITIONED_RECTANGLE_HH_
#define GLS_POSITIONED_RECTANGLE_HH_

#include "rectangle.hh"
#include "width_fwd.hh"
#include "height_fwd.hh"
#include "point.hh"

namespace gls {
struct positioned_rectangle {
  positioned_rectangle() = default;
  positioned_rectangle(point p, rectangle r);

  point::value_type x() const;
  point::value_type y() const;
  dim::width width() const;
  dim::height height() const;

  friend point top_left(positioned_rectangle const& r);

private:
  point p;
  rectangle r;
};

bool intersect(positioned_rectangle const& a, positioned_rectangle const& b);
bool outside(positioned_rectangle const& a, positioned_rectangle const& b);
point top_left(positioned_rectangle const& r);
point bottom_right(positioned_rectangle const& r);
}

#endif
