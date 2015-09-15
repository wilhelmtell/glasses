#include "surface.hh"
#include <SDL2/SDL.h>
#include "surface_creation_error.hh"

namespace gls {
surface::surface(SDL_Surface* s) : s(s, &SDL_FreeSurface) {
  if(!s) throw surface_creation_error(SDL_GetError());
}

surface::surface(char const* const bmp_filename)
: surface(SDL_LoadBMP(bmp_filename)) {}

SDL_Surface* surface::get() const { return s.get(); }
}
