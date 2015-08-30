#ifndef TLS_SDL_SYSTEM0_HH_
#define TLS_SDL_SYSTEM0_HH_

#include "detail/sdl_system.hh"

namespace tls {
struct sdl_system0 {
  sdl_system0();

private:
  detail::sdl_system sys;
};
}

#endif
