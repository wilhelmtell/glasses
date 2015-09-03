#ifndef TLS_POSITIONED_WINDOW_HH_
#define TLS_POSITIONED_WINDOW_HH_

#include "detail/window.hh"
#include "positioned_rectangle_fwd.hh"
#include "rectangle_fwd.hh"

namespace tls {
struct positioned_window {
  positioned_window(char const* const title,
                    positioned_rectangle const& bounds);

private:
  detail::window w;
};
}

#endif
