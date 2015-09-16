#ifndef GLS_LOGICAL_INIT_TCC_
#define GLS_LOGICAL_INIT_TCC_

#include "logical_init.hh"

namespace gls {
template <typename Op>
logical_init::logical_init(Op init) { init(); }
}

#endif
