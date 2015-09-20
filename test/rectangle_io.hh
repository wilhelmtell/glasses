#ifndef GLS_RECTANGLE_IO_HH_
#define GLS_RECTANGLE_IO_HH_

#include <iosfwd>
#include "../src/rectangle_fwd.hh"

namespace gls {
template <typename Ch, typename Tr>
std::basic_ostream<Ch, Tr>& operator<<(std::basic_ostream<Ch, Tr>& o,
                                       rectangle const& p);
}

#include "rectangle_io.tcc"

#endif
