#ifndef GLS_TTF_FILENAME_FWD_HH_
#define GLS_TTF_FILENAME_FWD_HH_

#include "detail/basic_filename_fwd.hh"

namespace gls {
struct ttf_filename_tag;
using ttf_filename = detail::basic_filename<ttf_filename_tag>;
}

#endif
