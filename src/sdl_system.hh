#ifndef TLS_SDL_SYSTEM_HH_
#define TLS_SDL_SYSTEM_HH_

#include "detail/sdl_system.hh"

namespace tls {
struct sdl_system {
  sdl_system();

private:
  detail::sdl_system sys;
};
}

#endif
