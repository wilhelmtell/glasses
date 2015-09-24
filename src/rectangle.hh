#ifndef GLS_RECTANGLE_HH_
#define GLS_RECTANGLE_HH_

#include "width_t.hh"
#include "height_t.hh"

namespace gls {
struct rectangle {
  rectangle() = default;
  rectangle(width_t w, height_t h);

  width_t width() const;
  height_t height() const;

private:
  width_t w;
  height_t h;
};

bool operator==(rectangle const& lhs, rectangle const& rhs);
bool operator!=(rectangle const& lhs, rectangle const& rhs);
rectangle unit_rectangle();
rectangle xstretched(rectangle const& r, width_t::value_type const& addition);
rectangle ystretched(rectangle const& r, width_t::value_type const& addition);
}

#endif
