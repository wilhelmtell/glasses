#ifndef GLS_SUBSYSTEM_INIT_ERROR_HH_
#define GLS_SUBSYSTEM_INIT_ERROR_HH_

#include <stdexcept>

namespace gls {
struct subsystem_init_error : std::runtime_error {
  subsystem_init_error() = default;
  explicit subsystem_init_error(char const* const m);
};
}

#endif
