#ifndef GLS_RECTANGLE_IO_TCC_
#define GLS_RECTANGLE_IO_TCC_

#include <iostream>
#include "../src/rectangle.hh"

namespace gls {
template <typename Ch, typename Tr>
std::basic_ostream<Ch, Tr>& operator<<(std::basic_ostream<Ch, Tr>& o,
                                       rectangle const& p) {
  return o << '(' << p.width() << ',' << p.height() << ')';
}
}

#endif
