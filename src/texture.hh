#ifndef TLS_TEXTURE_HH_
#define TLS_TEXTURE_HH_

#include <memory>
#include <SDL2/SDL.h>
#include "surface_fwd.hh"
#include "renderer_fwd.hh"

namespace tls {
struct texture {
  texture(renderer& r, surface& s);
  texture(renderer& r, char const* const bmp_filename);

  SDL_Texture* get() const;

private:
  using pointer = std::unique_ptr<SDL_Texture, decltype(&SDL_DestroyTexture)>;
  pointer t;
};
}

#endif
