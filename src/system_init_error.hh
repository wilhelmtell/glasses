#ifndef GLS_SYSTEM_INIT_ERROR_HH_
#define GLS_SYSTEM_INIT_ERROR_HH_

#include <stdexcept>

namespace gls {
struct system_init_error : std::runtime_error {
  system_init_error() = default;
  explicit system_init_error(char const* const m);
};
}

#endif
