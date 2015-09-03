#ifndef TLS_DETAIL_WINDOW_HH_
#define TLS_DETAIL_WINDOW_HH_

#include <memory>
#include <SDL2/SDL.h>
#include "../positioned_rectangle_fwd.hh"
#include "../rectangle_fwd.hh"

namespace tls {
namespace detail {
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
}
}

#endif
