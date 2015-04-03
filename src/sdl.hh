#ifndef TLS_SDL_HH_
#define TLS_SDL_HH_

#include "sdl_system.hh"
#include "sdl_ttf_system.hh"

namespace tls {
struct sdl {
  sdl();

private:
  sdl_system subsystem;
  sdl_ttf_system ttf_subsystem;
};
}

#endif
