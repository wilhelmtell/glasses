#ifndef GLS_POSITIONED_RECTANGLE_IO_TCC_
#define GLS_POSITIONED_RECTANGLE_IO_TCC_

#include <iostream>
#include "point_io.hh"
#include "rectangle_io.hh"
#include "../src/positioned_rectangle.hh"

namespace gls {
template <typename Ch, typename Tr>
std::basic_ostream<Ch, Tr>& operator<<(std::basic_ostream<Ch, Tr>& o,
                                       positioned_rectangle const& p) {
  return o << '(' << gls::top_left(p) << ','
           << gls::rectangle(p.width(), p.height()) << ')';
}
}

#endif
