#ifndef GLS_TEXTURE_HH_
#define GLS_TEXTURE_HH_

#include <memory>
#include <SDL2/SDL.h>
#include "surface_fwd.hh"
#include "renderer_fwd.hh"
#include "bmp_filename_fwd.hh"
#include "png_filename_fwd.hh"
#include "ttf_font_fwd.hh"
#include "text_fwd.hh"

namespace gls {
struct texture {
  texture() = default;
  explicit texture(SDL_Texture* t);
  texture(renderer& r, surface& s);
  texture(renderer& r, bmp_filename const& bmp);
  texture(renderer& r, png_filename const& png);
  texture(renderer& r, ttf_font const& ttf, text const& t, SDL_Color const& c);

  int width() const;
  int height() const;

  SDL_Texture* get() const;

private:
  using pointer = std::unique_ptr<SDL_Texture, decltype(&SDL_DestroyTexture)>;
  pointer t;
};
}

#endif
