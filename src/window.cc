#include "window.hh"
#include <SDL2/SDL.h>
#include "rectangle.hh"
#include "title.hh"

namespace tls {
window::window(title const& text, rectangle dimensions)
: w(text, dimensions, 0) {}

SDL_Window* window::get() const { return w.get(); }
}
