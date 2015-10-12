#include "mix_system.hh"
#include <SDL2/SDL_mixer.h>
#include "logical_cleanup.hh"
#include "logical_init.hh"
#include "mix_system_init_error.hh"

namespace {
void init_mix_or_throw(int const& flags) {
  if(Mix_Init(flags) < 0) throw gls::mix_system_init_error(Mix_GetError());
}
}

namespace gls {
mix_system::mix_system(int const& flags)
: guard(logical_init([&] { init_mix_or_throw(flags); }),
        logical_cleanup(&Mix_Quit)) {}
}
