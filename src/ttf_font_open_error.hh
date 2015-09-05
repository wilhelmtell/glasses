#ifndef TLS_TTF_FONT_OPEN_ERROR_HH_
#define TLS_TTF_FONT_OPEN_ERROR_HH_

#include <stdexcept>

namespace tls {
struct ttf_font_open_error : std::runtime_error {
  ttf_font_open_error() = default;
  explicit ttf_font_open_error(char const* const m);
};
}

#endif
