#ifndef TLS_POSITIONED_RECTANGLE_HH_
#define TLS_POSITIONED_RECTANGLE_HH_

#include "dim/width.hh"
#include "dim/height.hh"
#include "point.hh"

namespace tls {
struct positioned_rectangle {
  positioned_rectangle() = default;
  positioned_rectangle(point p, dim::width w, dim::height h);

public:
  point p;
  dim::width w;
  dim::height h;
};

bool intersect(positioned_rectangle const& a, positioned_rectangle const& b);
bool outside(positioned_rectangle const& a, positioned_rectangle const& b);
point bottom_right(positioned_rectangle const& r);
}

#endif
