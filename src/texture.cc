#include "texture.hh"
#include "renderer.hh"
#include "surface.hh"
#include <SDL2/SDL.h>
#include "texture_creation_error.hh"
#include "bmp_filename.hh"
#include "ttf_font.hh"
#include "text.hh"
#include "colour.hh"

namespace {
SDL_Texture* texture_from_bmp(gls::renderer& renderer,
                              gls::bmp_filename const& bmp) {
  gls::surface surface(bmp);
  return SDL_CreateTextureFromSurface(renderer.get(), surface.get());
}

SDL_Texture* make_texture(gls::renderer& renderer,
                          gls::ttf_font const& ttf,
                          gls::text const& t,
                          gls::colour const& c) {
  return SDL_CreateTextureFromSurface(
    renderer.get(),
    TTF_RenderText_Solid(ttf.get(), t.c_str(),
                         {c.red(), c.green(), c.blue(), c.alpha()}));
}
}

namespace gls {
texture::texture(SDL_Texture* t) : t(t, &SDL_DestroyTexture) {}

texture::texture(renderer& r, surface& s)
: texture(SDL_CreateTextureFromSurface(r.get(), s.get())) {
  if(!t) throw texture_creation_error(SDL_GetError());
}

texture::texture(renderer& r, bmp_filename const& bmp)
: texture(texture_from_bmp(r, bmp)) {
  if(!t) throw texture_creation_error(SDL_GetError());
}

texture::texture(renderer& r,
                 ttf_font const& ttf,
                 text const& t,
                 colour const& c)
: texture(make_texture(r, ttf, t, c)) {}

SDL_Texture* texture::get() const { return t.get(); }
}
