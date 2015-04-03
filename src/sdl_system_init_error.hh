#ifndef TLS_SDL_SYSTEM_INIT_ERROR_HH_
#define TLS_SDL_SYSTEM_INIT_ERROR_HH_

#include <stdexcept>

namespace tls {
struct sdl_system_init_error : std::runtime_error {
  sdl_system_init_error(char const* const m);
};
}

#endif
