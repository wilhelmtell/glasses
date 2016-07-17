#include "window.hh"
#include "sdl_point.hh"
#include "title.hh"
#include "window_creation_error.hh"
#include <SDL2/SDL.h>

namespace gls {
window::window() : w{nullptr, [](SDL_Window*) {}} {}

window::window(SDL_Window* w) : w(w, &SDL_DestroyWindow) {}

window::window(title const& text, SDL_Rect const& bounds, int const& flags)
: w(SDL_CreateWindow(
      text.c_str(), bounds.x, bounds.y, bounds.w, bounds.h, flags),
    &SDL_DestroyWindow) {
  if(w == nullptr) throw window_creation_error(SDL_GetError());
}

SDL_Window* window::get() const { return w.get(); }

int width(SDL_Window* w) {
  int value;
  SDL_GetWindowSize(w, &value, nullptr);
  return value;
}

int height(SDL_Window* w) {
  int value;
  SDL_GetWindowSize(w, nullptr, &value);
  return value;
}
}
