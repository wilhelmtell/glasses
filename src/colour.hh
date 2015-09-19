#ifndef GLS_COLOUR_HH_
#define GLS_COLOUR_HH_

#include <cstdint>

namespace gls {
struct colour {
  using value_type = std::uint8_t;

  colour() = default;
  colour(value_type r, value_type g, value_type b, value_type a);

  value_type red() const;
  value_type green() const;
  value_type blue() const;
  value_type alpha() const;

private:
  value_type r;
  value_type g;
  value_type b;
  value_type a;
};
}

#endif
