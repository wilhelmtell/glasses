#ifndef GLS_DIM_HEIGHT_HH_
#define GLS_DIM_HEIGHT_HH_

// height is a type alias, specified in height_fwd.hh with incomplete types.
// here we bring in the basic_length definition and define height_t_tag so
// height becomes a complete type alias.

#include "height_fwd.hh"
#include "basic_length.hh"

namespace gls {
namespace dim {
struct height_t_tag {};
}
}

#endif
