#ifndef TLS_WINDOW_HANDLE_HH_
#define TLS_WINDOW_HANDLE_HH_

#include "detail/window.hh"
#include "rectangle_fwd.hh"

namespace tls {
struct window {
  window(char const* const title, rectangle dimensions);

  SDL_Window* get() const;

private:
  detail::window w;
};
}

#endif
