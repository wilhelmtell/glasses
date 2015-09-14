#ifndef GLS_POSITIONED_WINDOW_HH_
#define GLS_POSITIONED_WINDOW_HH_

#include "detail/window.hh"
#include "positioned_rectangle_fwd.hh"
#include "title_fwd.hh"

namespace gls {
struct positioned_window {
  positioned_window(title const& text, positioned_rectangle const& bounds);

  SDL_Window* get() const;

private:
  detail::window w;
};
}

#endif
