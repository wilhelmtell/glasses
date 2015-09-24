#ifndef GLS_WIDTH_T_HH_
#define GLS_WIDTH_T_HH_

// width_t is a type alias, specified in width_t_fwd.hh with incomplete types.
// here we bring in the basic_length definition and define width_t_tag so
// width_t becomes a complete type alias.

#include "width_t_fwd.hh"
#include "basic_length.hh"

namespace gls {
struct width_t_tag {};
}

#endif
