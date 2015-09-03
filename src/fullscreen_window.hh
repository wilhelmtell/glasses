#ifndef TLS_FULLSCREEN_WINDOW_HH_
#define TLS_FULLSCREEN_WINDOW_HH_

#include "detail/window.hh"
#include "rectangle_fwd.hh"

namespace tls {
struct fullscreen_window {
  fullscreen_window(char const* const title, rectangle dimensions);

private:
  detail::window w;
};
}

#endif
