#ifndef TLS_SDL_TTF_SYSTEM_INIT_ERROR_HH_
#define TLS_SDL_TTF_SYSTEM_INIT_ERROR_HH_

#include <stdexcept>

namespace tls {
struct sdl_ttf_system_init_error : std::runtime_error {
  explicit sdl_ttf_system_init_error(char const* const m);
};
}

#endif
