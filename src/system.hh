#ifndef GLS_SYSTEM_HH_
#define GLS_SYSTEM_HH_

#include "detail/system.hh"

// Initialize all SDL subsystems
namespace gls {
struct system {
  system();

private:
  detail::system sys;
};
}

#endif
