#include "window.hh"
#include <SDL2/SDL.h>
#include "rectangle.hh"
#include "title.hh"

namespace gls {
window::window(title const& text, rectangle dimensions)
: w(text, dimensions, 0) {}

SDL_Window* window::get() const { return w.get(); }
}
