#ifndef GLS_DETAIL_BASIC_FILENAME_HH_
#define GLS_DETAIL_BASIC_FILENAME_HH_

#include <string>

namespace gls {
namespace detail {
template <typename T>
struct basic_filename {
  basic_filename() = default;
  explicit basic_filename(std::string name);

  char const* c_str() const;

private:
  std::string name;
};
}
}

#include "basic_filename.tcc"

#endif
