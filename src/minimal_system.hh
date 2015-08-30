#ifndef TLS_MINIMAL_SYSTEM_HH_
#define TLS_MINIMAL_SYSTEM_HH_

#include "detail/system.hh"

// First class for initializing a select few SDL subsystems.
//
// To initialize all SDL subsystems, see system.
//
// Example usage:
//
//  namespace user {
//  struct system {
//  private:
//    tls::minimal_system sys;
//    tls::video_subsystem;
//    tls::timer_subsystem;
//  };
//  }
namespace tls {
struct minimal_system {
  minimal_system();

private:
  detail::system sys;
};
}

#endif
