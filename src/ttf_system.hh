#ifndef GLS_TTF_SYSTEM_HH_
#define GLS_TTF_SYSTEM_HH_

#include "logical_scope_guard.hh"

namespace gls {
struct ttf_system {
  ttf_system();

private:
  logical_scope_guard guard;
};
}

#endif
