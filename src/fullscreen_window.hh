#ifndef GLS_FULLSCREEN_WINDOW_HH_
#define GLS_FULLSCREEN_WINDOW_HH_

#include "detail/window.hh"
#include "rectangle_fwd.hh"
#include "title_fwd.hh"
#include <SDL2/SDL.h>

namespace gls {
struct fullscreen_window {
  explicit fullscreen_window(SDL_Window* w);
  fullscreen_window(title const& text, rectangle dimensions);

  SDL_Window* get() const;

private:
  detail::window w;
};
}

#endif
