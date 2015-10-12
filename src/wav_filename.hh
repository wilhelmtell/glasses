#ifndef GLS_WAV_FILENAME_HH_
#define GLS_WAV_FILENAME_HH_

#include "filename.hh"
#include <string>

namespace gls {
struct wav_filename {
  wav_filename() = default;
  explicit wav_filename(std::string const& name);

  char const* c_str() const;

private:
  filename name;
};
}

#endif
