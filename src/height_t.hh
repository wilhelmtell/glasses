#ifndef GLS_HEIGHT_T_HH_
#define GLS_HEIGHT_T_HH_

// height_t is a type alias, specified in height_t_fwd.hh with incomplete
// types. here we bring in the basic_length definition and define height_t_tag
// so height_t becomes a complete type alias.

#include "height_t_fwd.hh"
#include "basic_length.hh"

namespace gls {
struct height_t_tag {};
}

#endif
