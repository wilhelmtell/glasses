#include "system.hh"
#include <SDL2/SDL.h>
#include "../system_init_error.hh"
#include <functional>

namespace {
void init_or_throw(int const& flags) {
  if(SDL_Init(flags) < 0) throw tls::system_init_error(SDL_GetError());
}
}

namespace tls {
namespace detail {
system::system(int const& flags)
: guard(std::bind(&init_or_throw, flags), &SDL_Quit) {}
}
}
