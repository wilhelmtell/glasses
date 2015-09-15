#include "positioned_window.hh"
#include "positioned_rectangle.hh"
#include "title.hh"
#include <SDL2/SDL.h>

namespace gls {
positioned_window::positioned_window(SDL_Window* w) : w(w) {}

positioned_window::positioned_window(title const& text,
                                     positioned_rectangle const& bounds)
: w(text, bounds, 0) {}

SDL_Window* positioned_window::get() const { return w.get(); }
}
