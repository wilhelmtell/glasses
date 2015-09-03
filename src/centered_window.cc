#include "centered_window.hh"
#include "rectangle.hh"
#include "positioned_rectangle.hh"
#include "point.hh"
#include <SDL2/SDL.h>

namespace tls {
centered_window::centered_window(title const& text, rectangle const& bounds)
: w(text,
    positioned_rectangle(point(SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED),
                         bounds)) {}
}
