#ifndef GLS_SURFACE_HH_
#define GLS_SURFACE_HH_

#include <memory>
#include <SDL2/SDL.h>
#include "bmp_filename_fwd.hh"
#include "width_fwd.hh"
#include "height_fwd.hh"
#include "height_fwd.hh"
#include "text_fwd.hh"
#include "colour_fwd.hh"
#include "ttf_font_fwd.hh"

namespace gls {
struct surface {
  surface() = default;
  explicit surface(SDL_Surface* s);
  explicit surface(bmp_filename const& bmp);
  surface(ttf_font const& ttf, text const& t, colour const& c);

  dim::width width() const;
  dim::height height() const;

  SDL_Surface* get() const;

private:
  using pointer = std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)>;
  pointer s;
};
}

#endif
