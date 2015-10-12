#ifndef GLS_FILENAME_FWD_HH_
#define GLS_FILENAME_FWD_HH_

#include "detail/basic_filename_fwd.hh"

namespace gls {
struct filename_tag;
using filename = detail::basic_filename<filename_tag>;
}

#endif
