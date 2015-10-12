#ifndef GLS_OTF_FILENAME_HH_
#define GLS_OTF_FILENAME_HH_

#include "filename.hh"
#include <string>

namespace gls {
struct otf_filename {
  otf_filename() = default;
  explicit otf_filename(std::string const& name);

  char const* c_str() const;

private:
  filename name;
};
}

#endif
