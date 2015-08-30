#include "sdl_surface.hh"
#include <SDL2/SDL.h>

namespace tls {
sdl_surface::sdl_surface(std::string const& bmp_filename)
: s(SDL_LoadBMP(bmp_filename.c_str()), &SDL_FreeSurface) {}

sdl_surface::sdl_surface(SDL_Surface* s) : s{s, SDL_FreeSurface} {}

SDL_Surface* sdl_surface::get() const { return s.get(); }
}
