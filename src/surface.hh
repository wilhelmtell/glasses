#ifndef GLS_SURFACE_HH_
#define GLS_SURFACE_HH_

#include "bmp_filename_fwd.hh"
#include "png_filename_fwd.hh"
#include "text_fwd.hh"
#include "ttf_font_fwd.hh"
#include <SDL2/SDL.h>
#include <memory>

namespace gls {
struct surface {
  surface();
  surface(SDL_Surface* s);
  explicit surface(bmp_filename const& bmp);
  explicit surface(png_filename const& png);
  surface(ttf_font const& ttf, text const& t, SDL_Color const& c);

  int width() const;
  int height() const;

  SDL_Surface* get() const;

private:
  using pointer = std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)>;
  pointer s;
};
}

#endif
