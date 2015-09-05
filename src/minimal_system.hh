#ifndef GLS_MINIMAL_SYSTEM_HH_
#define GLS_MINIMAL_SYSTEM_HH_

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
//    gls::minimal_system sys;
//    gls::video_subsystem;
//    gls::timer_subsystem;
//  };
//  }
namespace gls {
struct minimal_system {
  minimal_system();

private:
  detail::system sys;
};
}

#endif
