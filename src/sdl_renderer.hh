#ifndef TLS_SDL_RENDERER_HH_
#define TLS_SDL_RENDERER_HH_

#include <memory>
#include <SDL2/SDL.h>
#include "sdl_window_fwd.hh"

namespace tls {
struct sdl_renderer {
  sdl_renderer(sdl_window const& w, int const& index, int const& flags);

  SDL_Renderer* get() const;

private:
  using pointer
    = std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)>;
  pointer r;
};
}

#endif
