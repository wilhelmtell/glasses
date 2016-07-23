#include "mix_system_init_error.hh"

namespace gls {
mix_system_init_error::mix_system_init_error(char const* const m)
: std::runtime_error(m) {}
}  // namespace gls
