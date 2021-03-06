#include "surface.hh"
#include "bmp_filename.hh"
#include "png_filename.hh"
#include "surface_creation_error.hh"
#include "text.hh"
#include "ttf_filename.hh"
#include "ttf_font.hh"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

namespace gls {
surface::surface() : s{nullptr, [](SDL_Surface*) {}} {}

surface::surface(SDL_Surface* s) : s(s, &SDL_FreeSurface) {
  if(s == nullptr) throw surface_creation_error(SDL_GetError());
}

surface::surface(bmp_filename const& bmp)
: surface(SDL_LoadBMP(bmp.c_str())) {}

surface::surface(png_filename const& png) : surface(IMG_Load(png.c_str())) {}

surface::surface(ttf_font const& ttf, text const& t, SDL_Color const& c)
: surface(TTF_RenderText_Solid(ttf.get(), t.c_str(), c)) {}

int surface::width() const { return s->w; }

int surface::height() const { return s->h; }

SDL_Surface* surface::get() const { return s.get(); }
}  // namespace gls
