#include "fullscreen_desktop_window.hh"
#include <SDL2/SDL.h>
#include "rectangle.hh"
#include "title.hh"
#include "width_t.hh"
#include "height_t.hh"

namespace gls {
fullscreen_desktop_window::fullscreen_desktop_window(SDL_Window* w) : w(w) {}

fullscreen_desktop_window::fullscreen_desktop_window(title const& text)
: w(text, rectangle(), SDL_WINDOW_FULLSCREEN_DESKTOP) {}

SDL_Window* fullscreen_desktop_window::get() const { return w.get(); }

width_t fullscreen_desktop_window::width() const { return w.width(); }

height_t fullscreen_desktop_window::height() const { return w.height(); }
}
