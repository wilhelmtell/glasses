#ifndef TLS_SDL_TTF_SYSTEM_HH_
#define TLS_SDL_TTF_SYSTEM_HH_

#include "logical_scope_guard.hh"

namespace tls {
struct sdl_ttf_system {
  sdl_ttf_system();

private:
  logical_scope_guard guard;
};
}

#endif
