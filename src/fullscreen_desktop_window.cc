#include "fullscreen_desktop_window.hh"
#include <SDL2/SDL.h>
#include "rectangle.hh"
#include "title.hh"

namespace tls {
fullscreen_desktop_window::fullscreen_desktop_window(title const& text)
: w(text, rectangle(), SDL_WINDOW_FULLSCREEN_DESKTOP) {}
}
