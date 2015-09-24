#include <catch/catch.hpp>
#include "rectangle_io.hh"
#include "../src/rectangle.hh"
#include "../src/width_t.hh"
#include "../src/height.hh"

TEST_CASE("unit_rectangle()") {
  auto const r = gls::unit_rectangle();
  REQUIRE(r.width() == 1);
  REQUIRE(r.height() == 1);
}

TEST_CASE("rectangle equality") {
  auto const r = gls::unit_rectangle();
  gls::rectangle const x(gls::width_t(1), gls::dim::height(1));
  REQUIRE(r == x);
}

TEST_CASE("rectangle inequality") {
  gls::rectangle const r(gls::width_t(2), gls::dim::height(3));
  REQUIRE(r != gls::unit_rectangle());
}

TEST_CASE("rectangle xstretch(1)") {
  auto const r = gls::unit_rectangle();
  gls::rectangle const x(gls::width_t(2), gls::dim::height(1));
  REQUIRE(gls::xstretched(r, 1) == x);
}

TEST_CASE("rectangle xstretch(-1)") {
  auto const r = gls::unit_rectangle();
  gls::rectangle const x(gls::width_t(0), gls::dim::height(1));
  REQUIRE(gls::xstretched(r, -1) == x);
}

TEST_CASE("rectangle xstretch(0)") {
  auto const r = gls::unit_rectangle();
  auto const x = gls::unit_rectangle();
  REQUIRE(gls::xstretched(r, 0) == x);
}

TEST_CASE("rectangle ystretch(1)") {
  auto const r = gls::unit_rectangle();
  gls::rectangle const x(gls::width_t(1), gls::dim::height(2));
  REQUIRE(gls::ystretched(r, 1) == x);
}

TEST_CASE("rectangle ystretch(-1)") {
  auto const r = gls::unit_rectangle();
  gls::rectangle const x(gls::width_t(1), gls::dim::height(0));
  REQUIRE(gls::ystretched(r, -1) == x);
}

TEST_CASE("rectangle ystretch(0)") {
  auto const r = gls::unit_rectangle();
  auto const x = gls::unit_rectangle();
  REQUIRE(gls::ystretched(r, 0) == x);
}
