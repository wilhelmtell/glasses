#include <catch/catch.hpp>
#include "../src/title.hh"
#include <string>

TEST_CASE("default-constructed title compiles") {
  gls::title t;
}

TEST_CASE("value-initialized title zeroes out") {
  gls::title const t{};
  REQUIRE(t.c_str() == nullptr);  // XXX: should this be the empty string?
}

TEST_CASE("title constructed with a C string compiles") {
  gls::title const t("a");
}

TEST_CASE("8 characters title constructed with a C string equals c_str()") {
  gls::title const t("01234567");
  REQUIRE(std::string("01234567") == t.c_str());
}

TEST_CASE("1 character title constructed with a C string equals c_str()") {
  gls::title const t("a");
  REQUIRE(std::string("a") == t.c_str());
}

TEST_CASE("empty title constructed with a C string equals c_str()") {
  gls::title const t("");
  REQUIRE(std::string("") == t.c_str());
}
