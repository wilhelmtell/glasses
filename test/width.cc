#include <catch/catch.hpp>
#include "../src/width.hh"

TEST_CASE("value-initialized width equals 0") {
  tls::width w{};
  REQUIRE(w == 0);
}
