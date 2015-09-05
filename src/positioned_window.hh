#ifndef TLS_POSITIONED_WINDOW_HH_
#define TLS_POSITIONED_WINDOW_HH_

#include "detail/window.hh"
#include "positioned_rectangle_fwd.hh"
#include "title_fwd.hh"

namespace tls {
struct positioned_window {
  positioned_window(title const& text, positioned_rectangle const& bounds);

private:
  detail::window w;
};
}

#endif
