#ifndef GLS_CENTERED_WINDOW_HH_
#define GLS_CENTERED_WINDOW_HH_

#include "positioned_window.hh"
#include "rectangle_fwd.hh"
#include "title_fwd.hh"
#include <SDL2/SDL.h>
#include "width_t_fwd.hh"
#include "height_t_fwd.hh"

namespace gls {
struct centered_window {
  centered_window() = default;
  explicit centered_window(SDL_Window* w);
  centered_window(title const& text, rectangle const& bounds);

  SDL_Window* get() const;
  width_t width() const;
  height_t height() const;

private:
  positioned_window w;
};
}

#endif
