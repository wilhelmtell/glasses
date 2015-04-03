#ifndef TLS_HEIGHT_HH_
#define TLS_HEIGHT_HH_

namespace tls {
struct height {
  using value_type = int;

  height() = default;
  explicit height(value_type value);

  operator value_type() const;

private:
  value_type value;
};
}

#endif
