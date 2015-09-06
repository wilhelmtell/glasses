#ifndef GLS_DETAIL_WINDOW_HH_
#define GLS_DETAIL_WINDOW_HH_

#include <memory>
#include <SDL2/SDL.h>
#include "../positioned_rectangle_fwd.hh"
#include "../rectangle_fwd.hh"
#include "../title_fwd.hh"

namespace gls {
namespace detail {
struct window {
  window(title const& text,
         positioned_rectangle const& bounds,
         int const& flags);
  window(title const& text, rectangle dimensions, int const& flags);

  SDL_Window* get() const;

private:
  using pointer = std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)>;
  pointer w;
};
}
}

#endif
