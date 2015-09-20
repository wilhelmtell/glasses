#ifndef GLS_DIM_WIDTH_HH_
#define GLS_DIM_WIDTH_HH_

namespace gls {
namespace dim {
struct width {
  using value_type = int;

  width() = default;
  explicit width(value_type value);

  operator value_type() const;

  width& operator+=(width::value_type const& rhs);
  width& operator-=(width::value_type const& rhs);
  width& operator*=(width::value_type const& rhs);
  width& operator/=(width::value_type const& rhs);

private:
  value_type value;
};
}
}

#endif
