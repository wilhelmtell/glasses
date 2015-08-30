#include "system_init_error.hh"
#include <stdexcept>

namespace tls {
system_init_error::system_init_error(char const* const m)
: std::runtime_error{m} {}
}
