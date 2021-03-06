#include "logical_scope_guard.hh"
#include "logical_cleanup.hh"
#include "logical_init.hh"
#include <utility>

namespace gls {
logical_scope_guard::logical_scope_guard(logical_cleanup c)
: c(std::move(c)) {}

logical_scope_guard::logical_scope_guard(logical_init /*i*/, logical_cleanup c)
: c(std::move(c)) {}
}  // namespace gls
