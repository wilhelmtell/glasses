#ifndef GLS_RENDERER_TCC_
#define GLS_RENDERER_TCC_

#include "renderer.hh"
#include "renderer_creation_error.hh"
#include <SDL2/SDL.h>

namespace gls {
template<typename Window>
renderer::renderer(Window const& w)
: r{SDL_CreateRenderer(w.get(), -1, 0), &SDL_DestroyRenderer} {
  if(r == nullptr) throw renderer_creation_error(SDL_GetError());
}
}

#endif
