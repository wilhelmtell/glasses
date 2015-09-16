#include "subsystem_init_error.hh"
#include <stdexcept>

namespace gls {
subsystem_init_error::subsystem_init_error(char const* const m)
: std::runtime_error(m) {}
}
