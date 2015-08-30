#ifndef TLS_TEXTURE_CREATION_ERROR_HH_
#define TLS_TEXTURE_CREATION_ERROR_HH_

#include <stdexcept>

namespace tls {
struct texture_creation_error : std::runtime_error {
  explicit texture_creation_error(char const* const m);
};
}

#endif
