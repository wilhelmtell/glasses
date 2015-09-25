#include "centered_window.hh"
#include "rectangle.hh"
#include "positioned_rectangle.hh"
#include "point.hh"
#include <SDL2/SDL.h>
#include "width_t.hh"
#include "height_t.hh"

namespace gls {
centered_window::centered_window(SDL_Window* w) : w(w) {}

centered_window::centered_window(title const& text, rectangle const& bounds)
: w(text,
    positioned_rectangle(point(SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED),
                         bounds)) {}

SDL_Window* centered_window::get() const { return w.get(); }

width_t centered_window::width() const { return w.width(); }

height_t centered_window::height() const { return w.height(); }
}
