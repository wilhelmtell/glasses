#include "fullscreen_desktop_window.hh"
#include <SDL2/SDL.h>
#include "rectangle.hh"

namespace tls {
fullscreen_desktop_window::fullscreen_desktop_window(char const* const title,
                                                     rectangle dimensions)
: w(title, dimensions, SDL_WINDOW_FULLSCREEN_DESKTOP) {}
}
