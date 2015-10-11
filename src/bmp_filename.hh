#ifndef GLS_BMP_FILENAME_HH_
#define GLS_BMP_FILENAME_HH_

#include "filename.hh"
#include <string>

namespace gls {
struct bmp_filename {
  bmp_filename() = default;
  explicit bmp_filename(std::string const& name);

  char const* c_str() const;

private:
  filename name;
};
}

#endif
