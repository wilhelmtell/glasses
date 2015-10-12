#ifndef GLS_FLAC_FILENAME_FWD_HH_
#define GLS_FLAC_FILENAME_FWD_HH_

#include "detail/basic_filename_fwd.hh"

namespace gls {
struct flac_filename_tag;
using flac_filename = detail::basic_filename<flac_filename_tag>;
}

#endif
