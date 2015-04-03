#ifndef TLS_WIDTH_HH_
#define TLS_WIDTH_HH_

namespace tls {
struct width {
  using value_type = int;

  width() = default;
  explicit width(value_type value);

  operator value_type() const;

private:
  value_type value;
};
}

#endif
