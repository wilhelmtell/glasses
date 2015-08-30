#include "ttf_system.hh"
#include <SDL2/SDL_ttf.h>
#include "logical_cleanup.hh"
#include "ttf_system_init_error.hh"

namespace {
void init_ttf_or_throw() {
  if(TTF_Init() < 0) throw tls::ttf_system_init_error(TTF_GetError());
}
}

namespace tls {
ttf_system::ttf_system()
: guard(&init_ttf_or_throw, logical_cleanup(&TTF_Quit)) {}
}
