#ifndef TLS_RECTANGLE_HH_
#define TLS_RECTANGLE_HH_

#include "dim/width.hh"
#include "dim/height.hh"
#include "point.hh"

namespace tls {
struct rectangle {
  rectangle() = default;
  rectangle(point p, dim::width w, dim::height h);

public:
  point p;
  dim::width w;
  dim::height h;
};

bool intersect(rectangle const& a, rectangle const& b);
bool outside(rectangle const& a, rectangle const& b);
point bottom_right(rectangle const& r);
}

#endif
