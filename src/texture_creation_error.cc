#include "texture_creation_error.hh"
#include <stdexcept>

namespace gls {
texture_creation_error::texture_creation_error(char const* const m)
: std::runtime_error(m) {}
}  // namespace gls
