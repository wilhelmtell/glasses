#ifndef TLS_LOGICAL_SCOPE_GUARD_HH_
#define TLS_LOGICAL_SCOPE_GUARD_HH_

#include <functional>

namespace tls {
struct logical_scope_guard {
  using cleanup_type = std::function<void()>; // XXX: better use of type system?
  using init_type = cleanup_type; // XXX: better use of type system?

  logical_scope_guard() = default;
  explicit logical_scope_guard(cleanup_type cleanup);
  logical_scope_guard(init_type init, cleanup_type cleanup);

  logical_scope_guard(logical_scope_guard const&) = delete;
  logical_scope_guard& operator=(logical_scope_guard const&) = delete;
  logical_scope_guard(logical_scope_guard&& rhs);
  logical_scope_guard& operator=(logical_scope_guard&& rhs);

  ~logical_scope_guard();

private:
  cleanup_type cleanup;
};
}

#include "logical_scope_guard.tcc"

#endif
