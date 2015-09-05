#include "texture.hh"
#include "renderer.hh"
#include "surface.hh"
#include <SDL2/SDL.h>
#include "texture_creation_error.hh"

namespace {
SDL_Texture* texture_from_bmp(gls::renderer& renderer,
                              char const* const bmp_filename) {
  gls::surface surface(bmp_filename);
  return SDL_CreateTextureFromSurface(renderer.get(), surface.get());
}
}

namespace gls {
texture::texture(renderer& r, surface& s)
: t(SDL_CreateTextureFromSurface(r.get(), s.get()), &SDL_DestroyTexture) {
  if(!t) throw texture_creation_error(SDL_GetError());
}

texture::texture(renderer& r, char const* const bmp_filename)
: t(texture_from_bmp(r, bmp_filename), &SDL_DestroyTexture) {
  if(!t) throw texture_creation_error(SDL_GetError());
}

SDL_Texture* texture::get() const { return t.get(); }
}
