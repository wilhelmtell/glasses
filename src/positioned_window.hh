#ifndef GLS_POSITIONED_WINDOW_HH_
#define GLS_POSITIONED_WINDOW_HH_

#include "detail/window.hh"
#include "positioned_rectangle_fwd.hh"
#include "title_fwd.hh"
#include <SDL2/SDL.h>

namespace gls {
struct positioned_window {
  positioned_window() = default;
  explicit positioned_window(SDL_Window* w);
  positioned_window(title const& text, positioned_rectangle const& bounds);

  SDL_Window* get() const;

private:
  detail::window w;
};
}

#endif
