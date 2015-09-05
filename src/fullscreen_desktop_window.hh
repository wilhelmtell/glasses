#ifndef GLS_FULLSCREEN_DESKTOP_WINDOW_HH_
#define GLS_FULLSCREEN_DESKTOP_WINDOW_HH_

#include "detail/window.hh"
#include "title_fwd.hh"

namespace gls {
struct fullscreen_desktop_window {
  explicit fullscreen_desktop_window(title const& text);

private:
  detail::window w;
};
}

#endif
