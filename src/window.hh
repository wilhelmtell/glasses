#ifndef TLS_WINDOW_HANDLE_HH_
#define TLS_WINDOW_HANDLE_HH_

#include "detail/window.hh"
#include "rectangle_fwd.hh"
#include "title_fwd.hh"

namespace tls {
struct window {
  window(title const& text, rectangle dimensions);

  SDL_Window* get() const;

private:
  detail::window w;
};
}

#endif
