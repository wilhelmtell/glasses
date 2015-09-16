#include "surface.hh"
#include <SDL2/SDL.h>
#include "surface_creation_error.hh"
#include "bmp_filename.hh"

namespace gls {
surface::surface(SDL_Surface* s) : s(s, &SDL_FreeSurface) {
  if(!s) throw surface_creation_error(SDL_GetError());
}

surface::surface(bmp_filename const& bmp)
: surface(SDL_LoadBMP(bmp.c_str())) {}

SDL_Surface* surface::get() const { return s.get(); }
}
