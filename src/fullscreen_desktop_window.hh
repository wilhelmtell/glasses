#ifndef GLS_FULLSCREEN_DESKTOP_WINDOW_HH_
#define GLS_FULLSCREEN_DESKTOP_WINDOW_HH_

#include "detail/window.hh"
#include "title_fwd.hh"
#include <SDL2/SDL.h>

namespace gls {
struct fullscreen_desktop_window {
  fullscreen_desktop_window() = default;
  explicit fullscreen_desktop_window(SDL_Window* w);
  explicit fullscreen_desktop_window(title const& text);

  SDL_Window* get() const;

private:
  detail::window w;
};
}

#endif
