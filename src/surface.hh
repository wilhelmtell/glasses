#ifndef GLS_SURFACE_HH_
#define GLS_SURFACE_HH_

#include <memory>
#include <SDL2/SDL.h>

namespace gls {
struct surface {
  explicit surface(SDL_Surface* s);
  explicit surface(char const* const bmp_filename);

  SDL_Surface* get() const;

private:
  using pointer = std::unique_ptr<SDL_Surface, decltype(&SDL_FreeSurface)>;
  pointer s;
};
}

#endif
