#include <catch/catch.hpp>
#include "../src/colour.hh"

TEST_CASE("default-constructed colour compiles") { gls::colour t; }

TEST_CASE("value-initialized colour zeroes out") {
  gls::colour const t{};
  auto const them_all = t.red() | t.green() | t.blue() | t.alpha();
  REQUIRE(them_all == 0);
}

TEST_CASE("colour constructed with colour components compiles") {
  gls::colour const t(2, 2, 2, 2);
}

TEST_CASE("colour constructed with random colour components") {
  gls::colour const t(13, 26, 152, 31);
  REQUIRE(t.red() == 13);
  REQUIRE(t.green() == 26);
  REQUIRE(t.blue() == 152);
  REQUIRE(t.alpha() == 31);
}

TEST_CASE("colour constructed with zeroes") {
  gls::colour const t(0, 0, 0, 0);
  REQUIRE(t.red() == 0);
  REQUIRE(t.green() == 0);
  REQUIRE(t.blue() == 0);
  REQUIRE(t.alpha() == 0);
}
