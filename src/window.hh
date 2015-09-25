#ifndef GLS_WINDOW_HANDLE_HH_
#define GLS_WINDOW_HANDLE_HH_

#include "detail/window.hh"
#include "rectangle_fwd.hh"
#include "title_fwd.hh"
#include <SDL2/SDL.h>
#include "width_t_fwd.hh"
#include "height_t_fwd.hh"

namespace gls {
struct window {
  window() = default;
  explicit window(SDL_Window* w);
  window(title const& text, rectangle const& dimensions);

  SDL_Window* get() const;
  width_t width() const;
  height_t height() const;

private:
  detail::window w;
};
}

#endif
