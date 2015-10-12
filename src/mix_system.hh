#ifndef GLS_MIX_SYSTEM_HH_
#define GLS_MIX_SYSTEM_HH_

#include "logical_scope_guard.hh"

namespace gls {
struct mix_system {
  explicit mix_system(int const& flags);

private:
  logical_scope_guard guard;
};
}

#endif
