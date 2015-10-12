#ifndef GLS_PNG_FILENAME_FWD_HH_
#define GLS_PNG_FILENAME_FWD_HH_

#include "detail/basic_filename_fwd.hh"

namespace gls {
struct png_filename_tag;
using png_filename = detail::basic_filename<png_filename_tag>;
}

#endif
