#ifndef GLS_RECTANGLE_HH_
#define GLS_RECTANGLE_HH_

#include "dim/width.hh"
#include "dim/height.hh"

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
}

#endif
