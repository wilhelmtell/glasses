#include "positioned_window.hh"
#include "positioned_rectangle.hh"
#include "rectangle.hh"
#include "point.hh"
#include <SDL2/SDL.h>

namespace tls {
positioned_window::positioned_window(char const* const title,
                                     positioned_rectangle const& bounds)
: w(title, bounds, 0) {}

positioned_window make_centered_window(char const* const title, rectangle r) {
  return positioned_window(
    title, positioned_rectangle(
             point(SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED), r));
}
}
