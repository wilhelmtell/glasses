#ifndef GLS_WINDOW_HANDLE_HH_
#define GLS_WINDOW_HANDLE_HH_

#include "detail/window.hh"
#include "rectangle_fwd.hh"
#include "title_fwd.hh"
#include <SDL2/SDL.h>

namespace gls {
struct window {
  explicit window(SDL_Window* w);
  window(title const& text, rectangle dimensions);

  SDL_Window* get() const;

private:
  detail::window w;
};
}

#endif
