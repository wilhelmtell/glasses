#ifndef GLS_FILENAME_HH_
#define GLS_FILENAME_HH_

#include <string>

namespace gls {
struct filename {
  filename() = default;
  explicit filename(std::string name);

  char const* c_str() const;

private:
  std::string name;
};
}

#endif
