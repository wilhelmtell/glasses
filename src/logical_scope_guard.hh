#ifndef TLS_LOGICAL_SCOPE_GUARD_HH_
#define TLS_LOGICAL_SCOPE_GUARD_HH_

#include <functional>
#include "logical_cleanup.hh"

namespace tls {
struct logical_scope_guard {
  using init_type = std::function<void()>;  // XXX: better use of type system?

  logical_scope_guard() = default;
  explicit logical_scope_guard(logical_cleanup c);
  logical_scope_guard(init_type init, logical_cleanup c);

private:
  logical_cleanup c;
};
}

#include "logical_scope_guard.tcc"

#endif
