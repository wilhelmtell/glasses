#include "surface_creation_error.hh"
#include <stdexcept>

namespace tls {
surface_creation_error::surface_creation_error(char const* const m)
: std::runtime_error{m} {}
}
