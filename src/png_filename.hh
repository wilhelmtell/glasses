#ifndef GLS_PNG_FILENAME_HH_
#define GLS_PNG_FILENAME_HH_

#include "filename.hh"
#include <string>

namespace gls {
struct png_filename {
  png_filename() = default;
  explicit png_filename(std::string const& name);

  char const* c_str() const;

private:
  filename name;
};
}

#endif
