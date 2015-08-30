#ifndef TLS_RENDERER_HH_
#define TLS_RENDERER_HH_

#include <memory>
#include <SDL2/SDL.h>
#include "window_fwd.hh"

namespace tls {
struct renderer {
  renderer(window const& w, int const& index, int const& flags);

  SDL_Renderer* get() const;

private:
  using pointer
    = std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)>;
  pointer r;
};
}

#endif