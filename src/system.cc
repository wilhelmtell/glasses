#include "system.hh"
#include <SDL2/SDL.h>

namespace tls {
system::system() : sys(SDL_INIT_EVERYTHING) {}
}
