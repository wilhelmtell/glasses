#include "window.hh"
#include <SDL2/SDL.h>
#include "window_creation_error.hh"
#include "positioned_rectangle.hh"
#include "rectangle.hh"
#include "point.hh"

namespace tls {
window::window(char const* const title,
               positioned_rectangle const& bounds,
               int const& flags)
: w{SDL_CreateWindow(title,
                     bounds.top_left().x,
                     bounds.top_left().y,
                     bounds.width(),
                     bounds.height(),
                     flags),
    &SDL_DestroyWindow} {
  if(w == nullptr) throw window_creation_error(SDL_GetError());
}

window::window(char const* const title, rectangle dimensions, int const& flags)
: window(
    title,
    positioned_rectangle(
      point(SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED), dimensions),
    flags) {}

SDL_Window* window::get() const { return w.get(); }

window make_centered_window(char const* const title,
                            rectangle r,
                            int const& flags) {
  return window(title,
                positioned_rectangle(
                  point(SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED), r),
                flags);
}
}
