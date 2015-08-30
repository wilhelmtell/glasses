#include "sdl_system.hh"
#include <SDL2/SDL.h>
#include "../sdl_system_init_error.hh"
#include <functional>

namespace {
void init_sdl_or_throw(int const& flags) {
  if(SDL_Init(flags) < 0) throw tls::sdl_system_init_error(SDL_GetError());
}
}

namespace tls {
namespace detail {
sdl_system::sdl_system(int const& flags)
: guard(std::bind(&init_sdl_or_throw, flags), &SDL_Quit) {}
}
}
