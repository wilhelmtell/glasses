#ifndef TLS_TTF_SYSTEM_HH_
#define TLS_TTF_SYSTEM_HH_

#include "logical_scope_guard.hh"

namespace tls {
struct ttf_system {
  ttf_system();

private:
  logical_scope_guard guard;
};
}

#endif
