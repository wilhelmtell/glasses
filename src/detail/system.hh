#ifndef GLS_DETAIL_SYSTEM_HH_
#define GLS_DETAIL_SYSTEM_HH_

#include "../logical_scope_guard.hh"

namespace gls {
namespace detail {
struct system {
  system() = default;
  explicit system(int const& flags);

private:
  logical_scope_guard guard;
};
}
}

#endif
