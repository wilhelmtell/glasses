#include "window.hh"
#include <SDL2/SDL.h>
#include "rectangle.hh"

namespace tls {
window::window(char const* const title, rectangle dimensions)
: w(title, dimensions, 0) {}

SDL_Window* window::get() const { return w.get(); }
}
