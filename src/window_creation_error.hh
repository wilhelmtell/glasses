#ifndef GLS_WINDOW_CREATION_ERROR_HH_
#define GLS_WINDOW_CREATION_ERROR_HH_

#include <stdexcept>

namespace gls {
struct window_creation_error : std::runtime_error {
  window_creation_error() = default;
  explicit window_creation_error(char const* const m);
};
}

#endif
