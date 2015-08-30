#include "sdl_ttf_system.hh"
#include <SDL2/SDL_ttf.h>
#include "sdl_ttf_system_init_error.hh"

namespace {
void init_ttf_or_throw() {
  if(TTF_Init() < 0) throw tls::sdl_ttf_system_init_error(TTF_GetError());
}
}

namespace tls {
sdl_ttf_system::sdl_ttf_system() : guard(&init_ttf_or_throw, &TTF_Quit) {}
}
