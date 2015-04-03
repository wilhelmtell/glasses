#include "sdl_ttf_system_init_error.hh"

namespace tls {
sdl_ttf_system_init_error::sdl_ttf_system_init_error(char const* const m)
: std::runtime_error{m} {}
}
