#ifndef TLS_SDL_SYSTEM_HH_
#define TLS_SDL_SYSTEM_HH_

#include <memory>

namespace tls {
struct sdl_system {
  explicit sdl_system(int const& flags);
  sdl_system(sdl_system&& rhs);
  sdl_system& operator=(sdl_system&& rhs);
  sdl_system(sdl_system const& rhs) = delete;
  sdl_system& operator=(sdl_system const& rhs) = delete;
  ~sdl_system();

private:
  bool owning;
};
}

#endif
