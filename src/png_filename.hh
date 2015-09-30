#ifndef GLS_PNG_FILENAME_HH_
#define GLS_PNG_FILENAME_HH_

#include "filename.hh"

namespace gls {
struct png_filename {
  png_filename() = default;
  explicit png_filename(char const* name);

  char const* c_str() const;

private:
  filename name;
};
}

#endif
