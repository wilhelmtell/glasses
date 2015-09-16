#include "texture.hh"
#include "renderer.hh"
#include "surface.hh"
#include <SDL2/SDL.h>
#include "texture_creation_error.hh"
#include "bmp_filename.hh"

namespace {
SDL_Texture* texture_from_bmp(gls::renderer& renderer,
                              gls::bmp_filename const& bmp) {
  gls::surface surface(bmp);
  return SDL_CreateTextureFromSurface(renderer.get(), surface.get());
}
}

namespace gls {
texture::texture(SDL_Texture* t) : t(t, &SDL_DestroyTexture) {}

texture::texture(renderer& r, surface& s)
: t(SDL_CreateTextureFromSurface(r.get(), s.get()), &SDL_DestroyTexture) {
  if(!t) throw texture_creation_error(SDL_GetError());
}

texture::texture(renderer& r, bmp_filename const& bmp)
: t(texture_from_bmp(r, bmp), &SDL_DestroyTexture) {
  if(!t) throw texture_creation_error(SDL_GetError());
}

SDL_Texture* texture::get() const { return t.get(); }
}
