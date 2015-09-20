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

rectangle unit_rectangle();
}

#endif
