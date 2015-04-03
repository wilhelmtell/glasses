#include "sdl_texture_creation_error.hh"
#include <stdexcept>

namespace tls {
sdl_texture_creation_error::sdl_texture_creation_error(char const* const m)
: std::runtime_error{m} {}
}
