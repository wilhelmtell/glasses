#include <catch/catch.hpp>
#include "../src/point.hh"
#include "../src/rectangle.hh"
#include "../src/width.hh"
#include "../src/height.hh"

TEST_CASE("crossing() outside a zero-sized rectangle") {
  tls::point const p{1, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{0}, tls::height{0}};
  REQUIRE(!tls::crossing(p, r));
}

TEST_CASE("crossing() on a zero-sized rectangle") {
  tls::point const p{0, 0};
  tls::rectangle const r{tls::point{0, 0}, tls::width{0}, tls::height{0}};
  REQUIRE(tls::crossing(p, r));
}

TEST_CASE("crossing() inside a non-zero-sized rectangle") {
  tls::point const p{1, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::crossing(p, r));
}

TEST_CASE("crossing() outside a non-zero-sized rectangle") {
  tls::point const p{0, 0};
  tls::rectangle const r{tls::point{1, 1}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::crossing(p, r));
}

TEST_CASE("crossing() on the top bound of a non-zero-sized rectangle") {
  tls::point const p{1, 0};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(tls::crossing(p, r));
}

TEST_CASE("crossing() on the right bound of a non-zero-sized rectangle") {
  tls::point const p{2, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(tls::crossing(p, r));
}

TEST_CASE("crossing() on the bottom bound of a non-zero-sized rectangle") {
  tls::point const p{1, 2};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(tls::crossing(p, r));
}

TEST_CASE("crossing() on the left bound of a non-zero-sized rectangle") {
  tls::point const p{0, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(tls::crossing(p, r));
}
