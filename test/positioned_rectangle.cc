#include <catch/catch.hpp>
#include "../src/positioned_rectangle.hh"
#include "../src/point.hh"
#include "../src/width_t.hh"
#include "../src/height_t.hh"
#include <SDL2/SDL_rect.h>

TEST_CASE(
  "value-initialized positioned_rectangle has value-initialized state") {
  gls::positioned_rectangle const r{};
  SECTION("value-initialized positioned_rectangle is at origin") {
    REQUIRE(0 == r.x());
    REQUIRE(0 == r.y());
  }
  SECTION("value-initialized positioned_rectangle is of size 0") {
    REQUIRE(0 == r.width());
    REQUIRE(0 == r.height());
  }
}

TEST_CASE(
  "positioned_rectangle \"zero\"-initialized has value-initialized state") {
  gls::positioned_rectangle const r(
    gls::point(0, 0), gls::rectangle(gls::width_t(0), gls::height_t(0)));
  SECTION("positioned_rectangle initialized to origin is at origin") {
    REQUIRE(0 == r.x());
    REQUIRE(0 == r.y());
  }
  SECTION("positioned_rectangle \"zero\"-initialized in size is of size 0") {
    REQUIRE(0 == r.width());
    REQUIRE(0 == r.height());
  }
}

TEST_CASE(
  "direct-initialized positioned_rectangle has direct-initialized state") {
  gls::positioned_rectangle const r(
    gls::point(3, 4), gls::rectangle(gls::width_t(5), gls::height_t(6)));
  SECTION("direct-initialized positioned_rectangle is in position") {
    REQUIRE(3 == r.x());
    REQUIRE(4 == r.y());
  }
  SECTION("direct-initialized positioned_rectangle has its size set") {
    REQUIRE(5 == r.width());
    REQUIRE(6 == r.height());
  }
}

TEST_CASE("to_sdl_rect() unit rectangle") {
  gls::positioned_rectangle const pr = gls::positioned_rectangle(
    gls::point{}, gls::rectangle(gls::width_t(1), gls::height_t(1)));
  SDL_Rect const r = gls::to_sdl_rect(pr);
  SDL_Rect const x = {0, 0, 1, 1};
  REQUIRE(r.x == x.x);
  REQUIRE(r.y == x.y);
  REQUIRE(r.w == x.w);
  REQUIRE(r.h == x.h);
}

TEST_CASE("to_sdl_rect() non-unit rectangle") {
  gls::positioned_rectangle const pr = gls::positioned_rectangle(
    gls::point{2, 1}, gls::rectangle(gls::width_t(21), gls::height_t(8)));
  SDL_Rect const r = gls::to_sdl_rect(pr);
  SDL_Rect const x = {2, 1, 21, 8};
  REQUIRE(r.x == x.x);
  REQUIRE(r.y == x.y);
  REQUIRE(r.w == x.w);
  REQUIRE(r.h == x.h);
}
