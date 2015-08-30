#ifndef TLS_SURFACE_CREATION_ERROR_HH_
#define TLS_SURFACE_CREATION_ERROR_HH_

#include <stdexcept>

namespace tls {
struct surface_creation_error : std::runtime_error {
  explicit surface_creation_error(char const* const m);
};
}

#endif
