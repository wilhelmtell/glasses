#include "sdl_texture.hh"
#include "sdl_renderer.hh"
#include "sdl_surface.hh"
#include <SDL2/SDL.h>

namespace tls {
sdl_texture::sdl_texture(sdl_renderer& r, sdl_surface& s)
: t(SDL_CreateTextureFromSurface(r.get(), s.get()), &SDL_DestroyTexture)
{
}

SDL_Texture* sdl_texture::get() const { return t.get(); }
}
