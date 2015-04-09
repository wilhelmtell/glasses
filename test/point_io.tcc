#ifndef TLS_POINT_IO_TCC_
#define TLS_POINT_IO_TCC_

#include <iostream>
#include "../src/point.hh"

namespace tls {
template <typename Ch, typename Tr>
std::basic_ostream<Ch, Tr>& operator<<(std::basic_ostream<Ch, Tr>& o,
                                       point const& p) {
  return o << '(' << p.x << ',' << p.y << ')';
}
}

#endif
