#ifndef GLS_TTF_FILENAME_HH_
#define GLS_TTF_FILENAME_HH_

#include "filename.hh"
#include <string>

namespace gls {
struct ttf_filename {
  ttf_filename() = default;
  explicit ttf_filename(std::string const& name);

  char const* c_str() const;

private:
  filename name;
};
}

#endif
