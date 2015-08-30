#include "logical_init.hh"
#include <functional>

namespace tls {
logical_init::logical_init(std::function<void()> i) { i(); }
}
