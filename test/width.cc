#include <catch/catch.hpp>
#include "../src/width.hh"

TEST_CASE("value-initialized width equals 0") {
  tls::width w{};
  REQUIRE(w == 0);
}

TEST_CASE("direct-initialized width equals the value it was initialized to") {
  tls::width w{4};
  REQUIRE(w == 4);
}

TEST_CASE("width::value_type compiles") {
  tls::width::value_type x{4};
  tls::width w{4};
  REQUIRE(x == w);
}
