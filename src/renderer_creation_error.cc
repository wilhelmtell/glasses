#include "renderer_creation_error.hh"

namespace gls {
renderer_creation_error::renderer_creation_error(char const* const m)
: std::runtime_error{m} {}
}
