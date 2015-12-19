#include "renderer.hh"
#include "renderer_creation_error.hh"
#include <SDL2/SDL.h>

namespace gls {
renderer::renderer(SDL_Renderer* r) : r(r, &SDL_DestroyRenderer) {
  if(r == nullptr) throw renderer_creation_error(SDL_GetError());
}

renderer::renderer(SDL_Window* w)
: renderer(SDL_CreateRenderer(w, -1, SDL_RENDERER_ACCELERATED)) {}

SDL_Renderer* renderer::get() const { return r.get(); }
}
