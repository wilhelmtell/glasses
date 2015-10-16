#include <catch/catch.hpp>
#include "../src/sdl_rect.hh"

TEST_CASE("unit_rectangle() returns a 1x1 rect at origin") {
  auto const r = gls::unit_rectangle();
  REQUIRE(r.x == 0);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("q1_rectangle() returns a 1x1 rect in the bottom left quadrant") {
  auto const r = gls::q1_rectangle();
  REQUIRE(r.x == -1);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("q2_rectangle() returns a 1x1 rect in the bottom right quadrant") {
  auto const r = gls::q2_rectangle();
  REQUIRE(r.x == 0);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("q3_rectangle() returns a 1x1 rect in the upper right quadrant") {
  auto const r = gls::q3_rectangle();
  REQUIRE(r.x == 0);
  REQUIRE(r.y == -1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("q4_rectangle() returns a 1x1 rect in the upper left quadrant") {
  auto const r = gls::q4_rectangle();
  REQUIRE(r.x == -1);
  REQUIRE(r.y == -1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("wstretched() returns a rect with w + 1") {
  auto const r = gls::wstretched(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 0);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 2);
  REQUIRE(r.h == 1);
}

TEST_CASE("hstretched() returns a rect with h + 1") {
  auto const r = gls::hstretched(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 0);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 2);
}

TEST_CASE("shifted_left()") {
  auto const r = gls::shifted_left(gls::unit_rectangle(), 1);
  REQUIRE(r.x == -1);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_right()") {
  auto const r = gls::shifted_right(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 1);
  REQUIRE(r.y == 0);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_up()") {
  auto const r = gls::shifted_up(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 0);
  REQUIRE(r.y == -1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_down()") {
  auto const r = gls::shifted_down(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 0);
  REQUIRE(r.y == 1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_up_left()") {
  auto const r = gls::shifted_up_left(gls::unit_rectangle(), 1);
  REQUIRE(r.x == -1);
  REQUIRE(r.y == -1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_up_right()") {
  auto const r = gls::shifted_up_right(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 1);
  REQUIRE(r.y == -1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_down_left()") {
  auto const r = gls::shifted_down_left(gls::unit_rectangle(), 1);
  REQUIRE(r.x == -1);
  REQUIRE(r.y == 1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}

TEST_CASE("shifted_down_right()") {
  auto const r = gls::shifted_down_right(gls::unit_rectangle(), 1);
  REQUIRE(r.x == 1);
  REQUIRE(r.y == 1);
  REQUIRE(r.w == 1);
  REQUIRE(r.h == 1);
}
