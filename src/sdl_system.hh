#ifndef TLS_SDL_SYSTEM_HH_
#define TLS_SDL_SYSTEM_HH_

#include "logical_scope_guard.hh"

namespace tls {
struct sdl_system {
  explicit sdl_system(int const& flags);

private:
  logical_scope_guard guard;
};
}

#endif
