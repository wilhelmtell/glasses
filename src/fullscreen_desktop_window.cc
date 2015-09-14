#include "fullscreen_desktop_window.hh"
#include <SDL2/SDL.h>
#include "rectangle.hh"
#include "title.hh"

namespace gls {
fullscreen_desktop_window::fullscreen_desktop_window(title const& text)
: w(text, rectangle(), SDL_WINDOW_FULLSCREEN_DESKTOP) {}

SDL_Window* fullscreen_desktop_window::get() const { return w.get(); }
}
