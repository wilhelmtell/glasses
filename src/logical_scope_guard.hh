#ifndef TLS_LOGICAL_SCOPE_GUARD_HH_
#define TLS_LOGICAL_SCOPE_GUARD_HH_

#include <functional>
#include "logical_cleanup.hh"
#include "logical_init.hh"

namespace tls {
struct logical_scope_guard {
  logical_scope_guard() = default;
  explicit logical_scope_guard(logical_cleanup c);
  logical_scope_guard(logical_init i, logical_cleanup c);

private:
  logical_cleanup c;
};
}

#endif
