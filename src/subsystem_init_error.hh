#ifndef TLS_SUBSYSTEM_INIT_ERROR_HH_
#define TLS_SUBSYSTEM_INIT_ERROR_HH_

#include <stdexcept>

namespace tls {
struct subsystem_init_error : std::runtime_error {
  subsystem_init_error() = default;
  explicit subsystem_init_error(char const* const m);
};
}

#endif
