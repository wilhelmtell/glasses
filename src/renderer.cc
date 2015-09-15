#include "renderer.hh"
#include <SDL2/SDL.h>

namespace gls {
renderer::renderer(SDL_Renderer* r) : r(r, &SDL_DestroyRenderer) {}

SDL_Renderer* renderer::get() const { return r.get(); }
}
