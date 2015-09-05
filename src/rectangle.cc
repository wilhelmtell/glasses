#include "rectangle.hh"
#include <utility>
#include "dim/width.hh"
#include "dim/height.hh"

namespace gls {
rectangle::rectangle(dim::width w, dim::height h)
: w(std::move(w)), h(std::move(h)) {}

dim::width rectangle::width() const { return w; }

dim::height rectangle::height() const { return h; }
}
