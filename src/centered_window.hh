#ifndef GLS_CENTERED_WINDOW_HH_
#define GLS_CENTERED_WINDOW_HH_

#include "positioned_window.hh"
#include "rectangle_fwd.hh"
#include "title_fwd.hh"

namespace gls {
struct centered_window {
  centered_window(title const& text, rectangle const& bounds);

  SDL_Window* get() const;

private:
  positioned_window w;
};
}

#endif
