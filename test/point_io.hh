#ifndef TLS_POINT_IO_HH_
#define TLS_POINT_IO_HH_

#include <iosfwd>
#include "../src/point_fwd.hh"

namespace tls {
template <typename Ch, typename Tr>
std::basic_ostream<Ch, Tr>& operator<<(std::basic_ostream<Ch, Tr>& o,
                                       point const& p);
}

#include "point_io.tcc"

#endif
