#include "positioned_window.hh"
#include "positioned_rectangle.hh"
#include "title.hh"

namespace gls {
positioned_window::positioned_window(title const& text,
                                     positioned_rectangle const& bounds)
: w(text, bounds, 0) {}
}
