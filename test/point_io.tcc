#ifndef GLS_POINT_IO_TCC_
#define GLS_POINT_IO_TCC_

#include <iostream>
#include "../src/point.hh"

namespace gls {
template <typename Ch, typename Tr>
std::basic_ostream<Ch, Tr>& operator<<(std::basic_ostream<Ch, Tr>& o,
                                       point const& p) {
  return o << '(' << p.x() << ',' << p.y() << ')';
}
}

#endif
