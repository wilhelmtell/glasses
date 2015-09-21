#ifndef GLS_RECTANGLE_HH_
#define GLS_RECTANGLE_HH_

#include "width.hh"
#include "height.hh"

namespace gls {
struct rectangle {
  rectangle() = default;
  rectangle(dim::width w, dim::height h);

  dim::width width() const;
  dim::height height() const;

private:
  dim::width w;
  dim::height h;
};

bool operator==(rectangle const& lhs, rectangle const& rhs);
bool operator!=(rectangle const& lhs, rectangle const& rhs);
rectangle unit_rectangle();
rectangle xstretched(rectangle const& r,
                     dim::width::value_type const& addition);
rectangle ystretched(rectangle const& r,
                     dim::width::value_type const& addition);
}

#endif
