#include "window_creation_error.hh"

namespace tls {
window_creation_error::window_creation_error(char const* const m)
: std::runtime_error{m} {}
}
