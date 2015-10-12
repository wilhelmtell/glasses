#ifndef GLS_MIX_CHUNK_OPEN_ERROR_HH_
#define GLS_MIX_CHUNK_OPEN_ERROR_HH_

#include <stdexcept>

namespace gls {
struct mix_chunk_open_error : std::runtime_error {
  mix_chunk_open_error() = default;
  explicit mix_chunk_open_error(char const* const m);
};
}

#endif
