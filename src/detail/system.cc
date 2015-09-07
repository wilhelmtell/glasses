#include "system.hh"
#include <SDL2/SDL.h>
#include "../logical_cleanup.hh"
#include "../system_init_error.hh"

namespace {
void init_or_throw(int const& flags) {
  if(SDL_Init(flags) < 0) throw gls::system_init_error(SDL_GetError());
}
}

namespace gls {
namespace detail {
system::system(int const& flags)
: guard(logical_init([&] { init_or_throw(flags); }),
        logical_cleanup(&SDL_Quit)) {}
}
}
