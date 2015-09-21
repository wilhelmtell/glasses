#ifndef GLS_DIM_HEIGHT_HH_
#define GLS_DIM_HEIGHT_HH_

namespace gls {
namespace dim {
struct height {
  using value_type = int;

  height() = default;
  explicit height(value_type value);

  operator value_type() const;

  height& operator+=(height::value_type const& rhs);
  height& operator-=(height::value_type const& rhs);
  height& operator*=(height::value_type const& rhs);
  height& operator/=(height::value_type const& rhs);

private:
  value_type value;
};

height operator+(height lhs, height::value_type const& rhs);
height operator-(height lhs, height::value_type const& rhs);
height operator*(height lhs, height::value_type const& rhs);
height operator/(height lhs, height::value_type const& rhs);
}
}

#endif
