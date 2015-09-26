#ifndef GLS_WINDOW_HH_
#define GLS_WINDOW_HH_

#include <memory>
#include <SDL2/SDL.h>
#include "title_fwd.hh"

namespace gls {
struct window {
  window() = default;
  explicit window(SDL_Window* w);
  window(title const& text, SDL_Rect const& bounds, int const& flags);

  SDL_Window* get() const;
  int width() const;
  int height() const;

private:
  using pointer = std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)>;
  pointer w;
};
}

#endif
