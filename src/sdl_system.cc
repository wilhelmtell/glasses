#include "sdl_system.hh"
#include <SDL2/SDL.h>
#include "sdl_system_init_error.hh"

namespace {
void init_sdl_or_throw() {
  if(SDL_Init(SDL_INIT_EVERYTHING) < 0) throw tls::sdl_system_init_error(SDL_GetError());
}
}

namespace tls {
sdl_system::sdl_system()
: guard(&init_sdl_or_throw, &SDL_Quit) {}
}
