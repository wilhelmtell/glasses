#ifndef GLS_RENDERER_HH_
#define GLS_RENDERER_HH_

#include <memory>
#include <SDL2/SDL.h>

namespace gls {
struct renderer {
  explicit renderer(SDL_Renderer* r);
  template <typename Window>
  explicit renderer(Window const& w);

  SDL_Renderer* get() const;

private:
  using pointer
    = std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)>;
  pointer r;
};
}

#include "renderer.tcc"

#endif
