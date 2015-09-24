#include "surface.hh"
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include "surface_creation_error.hh"
#include "bmp_filename.hh"
#include "width_t.hh"
#include "height.hh"
#include "text.hh"
#include "colour.hh"
#include "ttf_font.hh"
#include "ttf_filename.hh"

namespace {
SDL_Color sdl_colour(gls::colour const& c) {
  return {c.red(), c.green(), c.blue(), c.alpha()};
}
}

namespace gls {
surface::surface(SDL_Surface* s) : s(s, &SDL_FreeSurface) {
  if(!s) throw surface_creation_error(SDL_GetError());
}

surface::surface(bmp_filename const& bmp)
: surface(SDL_LoadBMP(bmp.c_str())) {}

surface::surface(ttf_font const& ttf, text const& t, colour const& c)
: surface(TTF_RenderText_Solid(ttf.get(), t.c_str(), sdl_colour(c))) {}

width_t surface::width() const { return width_t(s->w); }

dim::height surface::height() const { return dim::height(s->h); }

SDL_Surface* surface::get() const { return s.get(); }
}
