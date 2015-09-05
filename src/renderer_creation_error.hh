#ifndef GLS_RENDERER_CREATION_ERROR_HH_
#define GLS_RENDERER_CREATION_ERROR_HH_

#include <stdexcept>

namespace gls {
struct renderer_creation_error : std::runtime_error {
  renderer_creation_error() = default;
  explicit renderer_creation_error(char const* const m);
};
}

#endif
