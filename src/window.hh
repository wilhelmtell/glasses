#ifndef GLS_WINDOW_HH_
#define GLS_WINDOW_HH_

#include "title_fwd.hh"
#include <SDL2/SDL.h>
#include <memory>

namespace gls {
struct window {
  window();
  window(SDL_Window* w);
  window(title const& text, SDL_Rect const& bounds, int const& flags);

  SDL_Window* get() const;

private:
  using pointer = std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)>;
  pointer w;
};

int width(SDL_Window* w);
int height(SDL_Window* w);
}

#endif
