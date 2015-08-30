#include "renderer.hh"
#include <SDL2/SDL.h>
#include "renderer_creation_error.hh"
#include "window.hh"

namespace tls {
renderer::renderer(window const& w, int const& index, int const& flags)
: r{SDL_CreateRenderer(w.get(), index, flags), &SDL_DestroyRenderer} {
  if(r == nullptr) throw renderer_creation_error(SDL_GetError());
}

SDL_Renderer* renderer::get() const { return r.get(); }
}
