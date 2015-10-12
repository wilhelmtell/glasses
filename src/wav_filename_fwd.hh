#ifndef GLS_WAV_FILENAME_FWD_HH_
#define GLS_WAV_FILENAME_FWD_HH_

#include "detail/basic_filename_fwd.hh"

namespace gls {
struct wav_filename_tag;
using wav_filename = detail::basic_filename<wav_filename_tag>;
}

#endif
