#include <catch/catch.hpp>
#include "../../src/dim/width.hh"

TEST_CASE("value-initialized width equals 0") {
  gls::dim::width const w{};
  REQUIRE(w == 0);
}

TEST_CASE("direct-initialized width equals the value it was initialized to") {
  gls::dim::width const w{4};
  REQUIRE(w == 4);
}

TEST_CASE("width::value_type compiles") {
  gls::dim::width::value_type const x{4};
  gls::dim::width const w{4};
  REQUIRE(x == w);
}
