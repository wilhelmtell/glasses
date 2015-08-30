#include "system.hh"
#include <SDL2/SDL.h>
#include "../logical_cleanup.hh"
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
: guard(logical_init(std::bind(&init_or_throw, flags)),
        logical_cleanup(&SDL_Quit)) {}
}
}
