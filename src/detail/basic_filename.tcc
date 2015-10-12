#ifndef GLS_BASIC_FILENAME_TCC_
#define GLS_BASIC_FILENAME_TCC_

#include "basic_filename.hh"
#include <string>
#include <utility>

namespace gls {
namespace detail {
template <typename T>
basic_filename<T>::basic_filename(std::string name)
: name(std::move(name)) {}

template <typename T>
char const* basic_filename<T>::c_str() const {
  return name.c_str();
}
}
}

#endif
