#ifndef TLS_DETAIL_SYSTEM_HH_
#define TLS_DETAIL_SYSTEM_HH_

#include "../logical_scope_guard.hh"

namespace tls {
namespace detail {
struct system {
  explicit system(int const& flags);

private:
  logical_scope_guard guard;
};
}
}

#endif
