#include "sdl_texture.hh"
#include "sdl_renderer.hh"
#include "sdl_surface.hh"
#include <SDL2/SDL.h>
#include <string>
#include "texture_creation_error.hh"

namespace {
SDL_Texture* texture_from_bmp(tls::sdl_renderer& renderer,
                              std::string const& bmp_filename) {
  tls::sdl_surface surface(bmp_filename);
  return SDL_CreateTextureFromSurface(renderer.get(), surface.get());
}
}

namespace tls {
sdl_texture::sdl_texture(sdl_renderer& r, sdl_surface& s)
: t(SDL_CreateTextureFromSurface(r.get(), s.get()), &SDL_DestroyTexture) {
  if(!t) throw texture_creation_error(SDL_GetError());
}

sdl_texture::sdl_texture(sdl_renderer& r, std::string const& bmp_filename)
: t(texture_from_bmp(r, bmp_filename), &SDL_DestroyTexture) {
  if(!t) throw texture_creation_error(SDL_GetError());
}

SDL_Texture* sdl_texture::get() const { return t.get(); }
}
