#ifndef GLS_SURFACE_HH_
#define GLS_SURFACE_HH_

#include <memory>
#include <SDL2/SDL.h>
#include "bmp_filename_fwd.hh"

namespace gls {
struct surface {
  surface() = default;
  explicit surface(SDL_Surface* s);
  explicit surface(bmp_filename const& bmp);

  SDL_Surface* get() const;

private:
  using pointer = std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)>;
  pointer s;
};
}

#endif
