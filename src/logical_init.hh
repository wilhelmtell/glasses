#ifndef TLS_LOGICAL_INIT_HH_
#define TLS_LOGICAL_INIT_HH_

#include <functional>

namespace tls {
struct logical_init {
  logical_init() = default;
  explicit logical_init(std::function<void()> i);
};
}

#endif
