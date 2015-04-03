#include "renderer_creation_error.hh"

namespace tls {
renderer_creation_error::renderer_creation_error(char const* const m)
: std::runtime_error{m} {}
}
