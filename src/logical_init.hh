#ifndef GLS_LOGICAL_INIT_HH_
#define GLS_LOGICAL_INIT_HH_

#include <functional>

namespace gls {
struct logical_init {
  logical_init() = default;
  explicit logical_init(std::function<void()> i);
};
}

#endif
