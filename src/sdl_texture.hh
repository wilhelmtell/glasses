#ifndef TLS_SDL_TEXTURE_HH_
#define TLS_SDL_TEXTURE_HH_

#include <memory>
#include <SDL2/SDL.h>
#include "sdl_surface_fwd.hh"
#include "sdl_renderer_fwd.hh"

namespace tls {
struct sdl_texture {
  explicit sdl_texture(SDL_Texture* t);
  sdl_texture(sdl_renderer& r, sdl_surface& s);

  SDL_Texture* get() const;

private:
  using pointer = std::unique_ptr<SDL_Texture, decltype(&SDL_DestroyTexture)>;
  pointer t;
};
}

#endif
