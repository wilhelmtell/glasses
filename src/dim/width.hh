#ifndef TLS_DIM_WIDTH_HH_
#define TLS_DIM_WIDTH_HH_

namespace tls {
namespace dim {
struct width {
  using value_type = int;

  width() = default;
  explicit width(value_type value);

  operator value_type() const;

private:
  value_type value;
};
}
}

#endif
