#include "texture.hh"
#include "surface.hh"
#include <SDL2/SDL.h>
#include "texture_creation_error.hh"
#include "bmp_filename.hh"
#include "png_filename.hh"
#include "ttf_font.hh"
#include "text.hh"
#include "sdl_texture.hh"

namespace {
SDL_Texture* texture_from_bmp(SDL_Renderer* renderer,
                              gls::bmp_filename const& bmp) {
  gls::surface surface(bmp);
  return SDL_CreateTextureFromSurface(renderer, surface.get());
}

SDL_Texture* texture_from_png(SDL_Renderer* renderer,
                              gls::png_filename const& png) {
  gls::surface surface(png);
  return SDL_CreateTextureFromSurface(renderer, surface.get());
}

SDL_Texture* make_texture(SDL_Renderer* renderer,
                          gls::ttf_font const& ttf,
                          gls::text const& t,
                          SDL_Color const& c) {
  return SDL_CreateTextureFromSurface(
    renderer,
    TTF_RenderText_Solid(ttf.get(), t.c_str(), {c.r, c.g, c.b, c.a}));
}
}

namespace gls {
texture::texture(SDL_Texture* t) : t(t, &SDL_DestroyTexture) {
  if(!this->t) throw texture_creation_error(SDL_GetError());
}

texture::texture(SDL_Renderer* r, SDL_Surface* s)
: texture(SDL_CreateTextureFromSurface(r, s)) {}

texture::texture(SDL_Renderer* r, bmp_filename const& bmp)
: texture(texture_from_bmp(r, bmp)) {}

texture::texture(SDL_Renderer* r, png_filename const& png)
: texture(texture_from_png(r, png)) {}

texture::texture(SDL_Renderer* r,
                 ttf_font const& ttf,
                 text const& t,
                 SDL_Color const& c)
: texture(make_texture(r, ttf, t, c)) {}

int texture::width() const { return gls::width(get()); }

int texture::height() const { return gls::height(get()); }

SDL_Texture* texture::get() const { return t.get(); }
}
