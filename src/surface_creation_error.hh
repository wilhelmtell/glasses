#ifndef GLS_SURFACE_CREATION_ERROR_HH_
#define GLS_SURFACE_CREATION_ERROR_HH_

#include <stdexcept>

namespace gls {
struct surface_creation_error : std::runtime_error {
  surface_creation_error() = default;
  explicit surface_creation_error(char const* const m);
};
}

#endif
