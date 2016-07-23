#include "sdl_texture.hh"
#include <SDL2/SDL.h>
#include <cassert>

namespace gls {
int width(SDL_Texture* t) {
  int w;
  auto const err = SDL_QueryTexture(t, nullptr, nullptr, &w, nullptr);
  assert(err == 0);  // XXX: How should I handle an error here?
  return w;
}

int height(SDL_Texture* t) {
  int h;
  auto const err = SDL_QueryTexture(t, nullptr, nullptr, nullptr, &h);
  assert(err == 0);  // XXX: How should I handle an error here?
  return h;
}
}  // namespace gls
