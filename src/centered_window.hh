#ifndef TLS_CENTERED_WINDOW_HH_
#define TLS_CENTERED_WINDOW_HH_

#include "positioned_window.hh"
#include "rectangle_fwd.hh"
#include "title_fwd.hh"

namespace tls {
struct centered_window {
  centered_window(title const& text, rectangle const& bounds);

private:
  positioned_window w;
};
}

#endif
