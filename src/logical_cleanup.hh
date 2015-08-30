#ifndef TLS_LOGICAL_CLEANUP_HH_
#define TLS_LOGICAL_CLEANUP_HH_

#include <functional>

namespace tls {
struct logical_cleanup {
  logical_cleanup() = default;
  explicit logical_cleanup(std::function<void()> c);

  logical_cleanup(logical_cleanup const&) = delete;
  logical_cleanup& operator=(logical_cleanup const&) = delete;
  logical_cleanup(logical_cleanup&& rhs);
  logical_cleanup& operator=(logical_cleanup&& rhs);

  ~logical_cleanup();

private:
  std::function<void()> c;
};
}

#endif