#include <catch/catch.hpp>
#include "../../src/dim/height.hh"

TEST_CASE("value-initialized height equals 0") {
  tls::dim::height const h{};
  REQUIRE(h == 0);
}

TEST_CASE("direct-initialized height equals the value it was initialized to") {
  tls::dim::height const h{4};
  REQUIRE(h == 4);
}

TEST_CASE("height::value_type compiles") {
  tls::dim::height::value_type const x{4};
  tls::dim::height const h{4};
  REQUIRE(x == h);
}
