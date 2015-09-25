#include "window.hh"
#include <SDL2/SDL.h>
#include "rectangle.hh"
#include "title.hh"
#include "width_t.hh"
#include "height_t.hh"

namespace gls {
window::window(SDL_Window* w) : w(w) {}

window::window(title const& text, rectangle const& dimensions)
: w(text, dimensions, 0) {}

SDL_Window* window::get() const { return w.get(); }

width_t window::width() const { return w.width(); }

height_t window::height() const { return w.height(); }
}
