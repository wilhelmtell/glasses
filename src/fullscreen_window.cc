#include "fullscreen_window.hh"
#include <SDL2/SDL.h>
#include "rectangle.hh"

namespace tls {
fullscreen_window::fullscreen_window(char const* const title,
                                     rectangle dimensions)
: w(title, dimensions, SDL_WINDOW_FULLSCREEN) {}
}
