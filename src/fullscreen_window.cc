#include "fullscreen_window.hh"
#include <SDL2/SDL.h>
#include "rectangle.hh"
#include "title.hh"

namespace gls {
fullscreen_window::fullscreen_window(SDL_Window* w) : w(w) {}

fullscreen_window::fullscreen_window(title const& text, rectangle dimensions)
: w(text, dimensions, SDL_WINDOW_FULLSCREEN) {}

SDL_Window* fullscreen_window::get() const { return w.get(); }
}
