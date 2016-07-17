#ifndef GLS_LOGICAL_SCOPE_GUARD_HH_
#define GLS_LOGICAL_SCOPE_GUARD_HH_

#include "logical_cleanup.hh"
#include "logical_init.hh"
#include <functional>

namespace gls {
struct logical_scope_guard {
  logical_scope_guard() = default;
  explicit logical_scope_guard(logical_cleanup c);
  logical_scope_guard(logical_init i, logical_cleanup c);

private:
  logical_cleanup c;
};
}

#endif
