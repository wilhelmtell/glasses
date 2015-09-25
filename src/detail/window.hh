#ifndef GLS_DETAIL_WINDOW_HH_
#define GLS_DETAIL_WINDOW_HH_

#include <memory>
#include <SDL2/SDL.h>
#include "../positioned_rectangle_fwd.hh"
#include "../rectangle_fwd.hh"
#include "../title_fwd.hh"
#include "../width_t_fwd.hh"
#include "../height_t_fwd.hh"

namespace gls {
namespace detail {
struct window {
  window() = default;
  explicit window(SDL_Window* w);
  window(title const& text,
         positioned_rectangle const& bounds,
         int const& flags);
  window(title const& text, rectangle const& dimensions, int const& flags);

  SDL_Window* get() const;
  width_t width() const;
  height_t height() const;

private:
  using pointer = std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)>;
  pointer w;
};
}
}

#endif
