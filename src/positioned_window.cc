#include "positioned_window.hh"
#include "positioned_rectangle.hh"

namespace tls {
positioned_window::positioned_window(char const* const title,
                                     positioned_rectangle const& bounds)
: w(title, bounds, 0) {}
}
