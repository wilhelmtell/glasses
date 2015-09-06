#ifndef GLS_TTF_SYSTEM_INIT_ERROR_HH_
#define GLS_TTF_SYSTEM_INIT_ERROR_HH_

#include <stdexcept>

namespace gls {
struct ttf_system_init_error : std::runtime_error {
  ttf_system_init_error() = default;
  explicit ttf_system_init_error(char const* const m);
};
}

#endif
