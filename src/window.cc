#include "window.hh"
#include <SDL2/SDL.h>
#include "window_creation_error.hh"
#include "sdl_point.hh"
#include "title.hh"

namespace gls {
window::window(SDL_Window* w) : w(w, &SDL_DestroyWindow) {}

window::window(title const& text, SDL_Rect const& bounds, int const& flags)
: w(SDL_CreateWindow(
      text.c_str(), bounds.x, bounds.y, bounds.w, bounds.h, flags),
    &SDL_DestroyWindow) {
  if(w == nullptr) throw window_creation_error(SDL_GetError());
}

SDL_Window* window::get() const { return w.get(); }

int window::width() const {
  int width;
  SDL_GetWindowSize(w.get(), &width, nullptr);
  return width;
}

int window::height() const {
  int height;
  SDL_GetWindowSize(w.get(), nullptr, &height);
  return height;
}
}
