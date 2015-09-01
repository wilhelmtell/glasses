#include "surface.hh"
#include <SDL2/SDL.h>
#include "surface_creation_error.hh"

namespace tls {
surface::surface(char const * const bmp_filename)
: s(SDL_LoadBMP(bmp_filename), &SDL_FreeSurface) {
  if(!s) throw surface_creation_error(SDL_GetError());
}

SDL_Surface* surface::get() const { return s.get(); }
}
