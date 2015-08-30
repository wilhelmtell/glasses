#ifndef TLS_SYSTEM_HH_
#define TLS_SYSTEM_HH_

#include "detail/system.hh"

// Initialize all SDL subsystems
namespace tls {
struct system {
  system();

private:
  detail::system sys;
};
}

#endif
