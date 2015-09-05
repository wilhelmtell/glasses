#include "system.hh"
#include <SDL2/SDL.h>

namespace gls {
system::system() : sys(SDL_INIT_EVERYTHING) {}
}
