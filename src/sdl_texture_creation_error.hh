#ifndef TLS_SDL_TEXTURE_CREATION_ERROR_HH_
#define TLS_SDL_TEXTURE_CREATION_ERROR_HH_

#include <stdexcept>

namespace tls {
struct sdl_texture_creation_error : std::runtime_error {
  explicit sdl_texture_creation_error(char const* const m);
};
}

#endif
