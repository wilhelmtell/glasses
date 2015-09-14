#ifndef GLS_RENDERER_HH_
#define GLS_RENDERER_HH_

#include <memory>
#include <SDL2/SDL.h>
#include "window_fwd.hh"

namespace gls {
struct renderer {
  explicit renderer(window const& w);

  SDL_Renderer* get() const;

private:
  using pointer
    = std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)>;
  pointer r;
};
}

#endif
