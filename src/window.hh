#ifndef TLS_WINDOW_HANDLE_HH_
#define TLS_WINDOW_HANDLE_HH_

#include "detail/window.hh"
#include "positioned_rectangle_fwd.hh"
#include "rectangle_fwd.hh"

namespace tls {
struct window {
  window(char const* const title, positioned_rectangle const& bounds);
  window(char const* const title, rectangle dimensions);

  SDL_Window* get() const;

private:
  detail::window w;
};

window make_centered_window(char const* const title, rectangle r);
}

#endif
