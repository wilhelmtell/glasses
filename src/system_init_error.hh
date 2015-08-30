#ifndef TLS_SYSTEM_INIT_ERROR_HH_
#define TLS_SYSTEM_INIT_ERROR_HH_

#include <stdexcept>

namespace tls {
struct system_init_error : std::runtime_error {
  system_init_error(char const* const m);
};
}

#endif
