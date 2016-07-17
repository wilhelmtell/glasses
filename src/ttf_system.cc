#include "ttf_system.hh"
#include "logical_cleanup.hh"
#include "logical_init.hh"
#include "ttf_system_init_error.hh"
#include <SDL2/SDL_ttf.h>

namespace {
void init_ttf_or_throw() {
  if(TTF_Init() < 0) throw gls::ttf_system_init_error(TTF_GetError());
}
}

namespace gls {
ttf_system::ttf_system()
: guard(logical_init(&init_ttf_or_throw), logical_cleanup(&TTF_Quit)) {}
}
