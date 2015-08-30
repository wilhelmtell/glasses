#include "logical_scope_guard.hh"
#include "logical_cleanup.hh"
#include <utility>

namespace tls {
logical_scope_guard::logical_scope_guard(logical_cleanup c)
: c(std::move(c)) {}

logical_scope_guard::logical_scope_guard(init_type init, logical_cleanup c)
: c(std::move(c)) {
  init();
}
}
