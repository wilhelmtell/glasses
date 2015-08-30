#include "sdl_system.hh"
#include <SDL2/SDL.h>

namespace tls {
sdl_system::sdl_system() : sys(SDL_INIT_EVERYTHING) {}
}
