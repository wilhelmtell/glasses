#include "window.hh"
#include <SDL2/SDL.h>
#include "positioned_rectangle.hh"
#include "rectangle.hh"
#include "point.hh"

namespace tls {
window::window(char const* const title, positioned_rectangle const& bounds)
: w(title, bounds, 0) {}

window::window(char const* const title, rectangle dimensions)
: w(title, dimensions, 0) {}

SDL_Window* window::get() const { return w.get(); }

window make_centered_window(char const* const title, rectangle r) {
  return window(title,
                positioned_rectangle(
                  point(SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED), r));
}
}
