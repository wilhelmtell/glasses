#ifndef GLS_MIX_SYSTEM_INIT_ERROR_HH_
#define GLS_MIX_SYSTEM_INIT_ERROR_HH_

#include <stdexcept>

namespace gls {
struct mix_system_init_error : std::runtime_error {
  mix_system_init_error() = default;
  explicit mix_system_init_error(char const* const m);
};
}

#endif
