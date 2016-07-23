#include "ttf_system_init_error.hh"

namespace gls {
ttf_system_init_error::ttf_system_init_error(char const* const m)
: std::runtime_error(m) {}
}  // namespace gls
