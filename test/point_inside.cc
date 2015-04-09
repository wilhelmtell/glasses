#include <catch/catch.hpp>
#include "../src/point.hh"
#include "../src/rectangle.hh"
#include "../src/width.hh"
#include "../src/height.hh"

TEST_CASE("inside() with point inside a non-zero-sized rectangle") {
  tls::point const p{1, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(tls::inside(p, r));
}

TEST_CASE("inside() on the top bound of a non-zero-sized rectangle") {
  tls::point const p{1, 0};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::inside(p, r));
}

TEST_CASE("inside() on the right bound of a non-zero-sized rectangle") {
  tls::point const p{2, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::inside(p, r));
}

TEST_CASE("inside() on the bottom bound of a non-zero-sized rectangle") {
  tls::point const p{1, 2};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::inside(p, r));
}

TEST_CASE("inside() on the left bound of a non-zero-sized rectangle") {
  tls::point const p{0, 1};
  tls::rectangle const r{tls::point{0, 0}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::inside(p, r));
}

TEST_CASE("inside() outside a non-zero-sized rectangle") {
  tls::point const p{0, 1};
  tls::rectangle const r{tls::point{2, 2}, tls::width{2}, tls::height{2}};
  REQUIRE(!tls::inside(p, r));
}

TEST_CASE("inside() outside a zero-sized rectangle") {
  tls::point const p{0, 0};
  tls::rectangle const r{tls::point{2, 2}, tls::width{0}, tls::height{0}};
  REQUIRE(!tls::inside(p, r));
}

TEST_CASE("inside() on a zero-sized rectangle") {
  tls::point const p{0, 0};
  tls::rectangle const r{tls::point{0, 0}, tls::width{0}, tls::height{0}};
  REQUIRE(!tls::inside(p, r));  // can't possibly be inside a zero-sized rect
}
