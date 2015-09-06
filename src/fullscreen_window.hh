#ifndef GLS_FULLSCREEN_WINDOW_HH_
#define GLS_FULLSCREEN_WINDOW_HH_

#include "detail/window.hh"
#include "rectangle_fwd.hh"
#include "title_fwd.hh"

namespace gls {
struct fullscreen_window {
  fullscreen_window(title const& text, rectangle dimensions);

private:
  detail::window w;
};
}

#endif
