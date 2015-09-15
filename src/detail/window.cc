#include "window.hh"
#include <SDL2/SDL.h>
#include "../window_creation_error.hh"
#include "../positioned_rectangle.hh"
#include "../rectangle.hh"
#include "../point.hh"
#include "../title.hh"

namespace gls {
namespace detail {
window::window(SDL_Window* w) : w(w, &SDL_DestroyWindow) {}

window::window(title const& text,
               positioned_rectangle const& bounds,
               int const& flags)
: w{SDL_CreateWindow(text.c_str(),
                     bounds.top_left().x(),
                     bounds.top_left().y(),
                     bounds.width(),
                     bounds.height(),
                     flags),
    &SDL_DestroyWindow} {
  if(w == nullptr) throw window_creation_error(SDL_GetError());
}

window::window(title const& text, rectangle dimensions, int const& flags)
: window(
    text,
    positioned_rectangle(
      point(SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED), dimensions),
    flags) {}

SDL_Window* window::get() const { return w.get(); }
}
}
