#ifndef TLS_SDL_MINIMAL_SYSTEM_HH_
#define TLS_SDL_MINIMAL_SYSTEM_HH_

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
//    tls::sdl_minimal_system sys;
//    tls::sdl_video_subsystem;
//    tls::sdl_timer_subsystem;
//  };
//  }
namespace tls {
struct sdl_minimal_system {
  sdl_minimal_system();

private:
  detail::sdl_system sys;
};
}

#endif
