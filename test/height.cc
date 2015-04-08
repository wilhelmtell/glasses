#include <catch/catch.hpp>
#include "../src/height.hh"

TEST_CASE("value-initialized height equals 0") {
  tls::height const h{};
  REQUIRE(h == 0);
}

TEST_CASE("direct-initialized height equals the value it was initialized to") {
  tls::height const h{4};
  REQUIRE(h == 4);
}

TEST_CASE("height::value_type compiles") {
  tls::height::value_type const x{4};
  tls::height const h{4};
  REQUIRE(x == h);
}
