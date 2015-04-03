#include "sdl.hh"
#include <SDL2/SDL.h>

namespace tls {
sdl::sdl() : subsystem{SDL_INIT_VIDEO}, ttf_subsystem{} {}
}
