#ifndef GLS_BMP_FILENAME_HH_
#define GLS_BMP_FILENAME_HH_

#include "filename.hh"

namespace gls {
struct bmp_filename {
  bmp_filename() = default;
  explicit bmp_filename(char const* name);

  char const* c_str() const;

private:
  filename name;
};
}

#endif
