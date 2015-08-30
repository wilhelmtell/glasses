#include "texture_creation_error.hh"
#include <stdexcept>

namespace tls {
texture_creation_error::texture_creation_error(char const* const m)
: std::runtime_error{m} {}
}
