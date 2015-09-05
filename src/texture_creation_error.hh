#ifndef GLS_TEXTURE_CREATION_ERROR_HH_
#define GLS_TEXTURE_CREATION_ERROR_HH_

#include <stdexcept>

namespace gls {
struct texture_creation_error : std::runtime_error {
  texture_creation_error() = default;
  explicit texture_creation_error(char const* const m);
};
}

#endif
