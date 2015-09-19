#include <catch/catch.hpp>
#include "../src/point.hh"
#include "point_io.hh"

// +-------+
// | 4 | 3 |
// |---+---|
// | 1 | 2 |
// +-------+

TEST_CASE("point shifted_up() from within the 2nd quadrant") {
  gls::point const p(12, 34);
  gls::point const x(12, 32);  // 2nd quadrant up means towards x axis
  REQUIRE(gls::shifted_up(p, 2) == x);
}
