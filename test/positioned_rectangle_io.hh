#ifndef GLS_POSITIONED_RECTANGLE_IO_HH_
#define GLS_POSITIONED_RECTANGLE_IO_HH_

#include <iosfwd>
#include "../src/positioned_rectangle_fwd.hh"

namespace gls {
template <typename Ch, typename Tr>
std::basic_ostream<Ch, Tr>& operator<<(std::basic_ostream<Ch, Tr>& o,
                                       positioned_rectangle const& p);
}

#include "positioned_rectangle_io.tcc"

#endif
