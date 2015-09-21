#ifndef GLS_DIM_WIDTH_HH_
#define GLS_DIM_WIDTH_HH_

// width is a type alias, specified in width_fwd.hh with incomplete types. here
// we bring in the basic_length definition and define width_t so width becomes
// a complete type alias.

#include "width_fwd.hh"
#include "basic_length.hh"

namespace gls {
namespace dim {
struct width_t {};
}
}

#endif
