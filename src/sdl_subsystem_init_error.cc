#include "sdl_subsystem_init_error.hh"
#include <stdexcept>

namespace tls {
sdl_subsystem_init_error::sdl_subsystem_init_error(char const* const m)
: std::runtime_error{m} {}
}
