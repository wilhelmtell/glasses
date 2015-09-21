#include <catch/catch.hpp>
#include "../src/width.hh"

TEST_CASE("value-initialized width equals 0") {
  gls::dim::width const w{};
  REQUIRE(w == 0);
}

TEST_CASE("direct-initialized width equals the value it was initialized to") {
  gls::dim::width const w{4};
  REQUIRE(w == 4);
}

TEST_CASE("width::value_type compiles") {
  gls::dim::width::value_type const x{4};
  gls::dim::width const w{4};
  REQUIRE(x == w);
}

TEST_CASE("width::operator+=() with a positive rhs") {
  gls::dim::width w(4);
  w += 3;
  REQUIRE(w == 7);
}

TEST_CASE("width::operator+=() with a negative rhs") {
  gls::dim::width w(4);
  w += -3;
  REQUIRE(w == 1);
}

TEST_CASE("width::operator+=() with a 0 rhs") {
  gls::dim::width w(4);
  w += 0;
  REQUIRE(w == 4);
}

TEST_CASE("width::operator+=() capturing the evaluation") {
  gls::dim::width a(4), b(0);
  b = a += 3;
  REQUIRE(b == 7);
}

TEST_CASE("width::operator-=() with a positive rhs") {
  gls::dim::width w(4);
  w -= 3;
  REQUIRE(w == 1);
}

TEST_CASE("width::operator-=() with a negative rhs") {
  gls::dim::width w(4);
  w -= -3;
  REQUIRE(w == 7);
}

TEST_CASE("width::operator-=() with a 0 rhs") {
  gls::dim::width w(4);
  w -= 0;
  REQUIRE(w == 4);
}

TEST_CASE("width::operator-=() capturing the evaluation") {
  gls::dim::width a(4), b(0);
  b = a -= 3;
  REQUIRE(b == 1);
}

TEST_CASE("width::operator*=() with a positive rhs") {
  gls::dim::width w(4);
  w *= 3;
  REQUIRE(w == 12);
}

TEST_CASE("width::operator*=() with a negative rhs") {
  gls::dim::width w(4);
  w *= -3;
  REQUIRE(w == -12);
}

TEST_CASE("width::operator*=() with a 0 rhs") {
  gls::dim::width w(4);
  w *= 0;
  REQUIRE(w == 0);
}

TEST_CASE("width::operator*=() capturing the evaluation") {
  gls::dim::width a(4), b(0);
  b = a *= 3;
  REQUIRE(b == 12);
}

TEST_CASE("width::operator/=() with a positive rhs") {
  gls::dim::width w(6);
  w /= 3;
  REQUIRE(w == 2);
}

TEST_CASE("width::operator/=() with a negative rhs") {
  gls::dim::width w(6);
  w /= -3;
  REQUIRE(w == -2);
}

TEST_CASE("width::operator/=() with a non-whole division") {
  gls::dim::width w(4);
  w /= 3;
  REQUIRE(w == 1);
}

TEST_CASE("width::operator/=() capturing the evaluation") {
  gls::dim::width a(6), b(0);
  b = a /= 3;
  REQUIRE(b == 2);
}
