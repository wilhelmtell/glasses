#ifndef GLS_OTF_FILENAME_FWD_HH_
#define GLS_OTF_FILENAME_FWD_HH_

#include "detail/basic_filename_fwd.hh"

namespace gls {
struct otf_filename_tag;
using otf_filename = detail::basic_filename<otf_filename_tag>;
}

#endif
