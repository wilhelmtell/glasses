#ifndef GLS_POINT_IO_HH_
#define GLS_POINT_IO_HH_

#include <iosfwd>
#include "../src/point_fwd.hh"

namespace gls {
template <typename Ch, typename Tr>
std::basic_ostream<Ch, Tr>& operator<<(std::basic_ostream<Ch, Tr>& o,
                                       point const& p);
}

#include "point_io.tcc"

#endif
