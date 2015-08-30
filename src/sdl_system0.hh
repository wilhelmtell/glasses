#ifndef TLS_SDL_SYSTEM0_HH_
#define TLS_SDL_SYSTEM0_HH_

#include "detail/sdl_system.hh"

// First class for initializing a select few SDL subsystems.
//
// To initialize all SDL subsystems, see sdl_system.
//
// Example usage:
//
//  namespace user {
//  struct sdl_system {
//  private:
//    tls::sdl_system0 sys;
//    tls::sdl_video_subsystem;
//    tls::sdl_timer_subsystem;
//  };
//  }
namespace tls {
struct sdl_system0 {
  sdl_system0();

private:
  detail::sdl_system sys;
};
}

#endif
