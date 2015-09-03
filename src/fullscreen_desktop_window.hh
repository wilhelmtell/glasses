#ifndef TLS_FULLSCREEN_DESKTOP_WINDOW_HH_
#define TLS_FULLSCREEN_DESKTOP_WINDOW_HH_

#include "detail/window.hh"
#include "rectangle_fwd.hh"
#include "title_fwd.hh"

namespace tls {
struct fullscreen_desktop_window {
  fullscreen_desktop_window(title const& text, rectangle dimensions);

private:
  detail::window w;
};
}

#endif
