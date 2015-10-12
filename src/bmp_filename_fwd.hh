#ifndef GLS_BMP_FILENAME_FWD_HH_
#define GLS_BMP_FILENAME_FWD_HH_

#include "detail/basic_filename_fwd.hh"

namespace gls {
struct bmp_filename_tag;
using bmp_filename = detail::basic_filename<bmp_filename_tag>;
}

#endif
