#ifndef GLS_LOGICAL_INIT_HH_
#define GLS_LOGICAL_INIT_HH_

namespace gls {
struct logical_init {
  logical_init() = default;
  template <typename Op>
  explicit logical_init(Op init);
};
}

#include "logical_init.tcc"

#endif
