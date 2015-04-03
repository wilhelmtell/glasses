#ifndef TLS_SDL_SURFACE_HH_
#define TLS_SDL_SURFACE_HH_

#include <memory>
#include <SDL2/SDL.h>

namespace tls {
struct sdl_surface {
  explicit sdl_surface(SDL_Surface* s);

  SDL_Surface* get() const;

private:
  using pointer = std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)>;
  pointer s;
};
}

#endif
