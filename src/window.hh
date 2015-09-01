#ifndef TLS_WINDOW_HANDLE_HH_
#define TLS_WINDOW_HANDLE_HH_

#include <memory>
#include <SDL2/SDL.h>
#include "positioned_rectangle_fwd.hh"
#include "rectangle_fwd.hh"

namespace tls {
struct window {
  window(char const* const title,
         positioned_rectangle const& bounds,
         int const& flags);
  window(char const* const title, rectangle dimensions, int const& flags);

  SDL_Window* get() const;

private:
  using pointer = std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)>;
  pointer w;
};

window make_centered_window(char const* const title,
                            rectangle r,
                            int const& flags);
}

#endif
