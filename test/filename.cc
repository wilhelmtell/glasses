#include <catch/catch.hpp>
#include "../src/filename.hh"
#include <string>

TEST_CASE("default-constructed filename compiles") {
  gls::filename t;
}

TEST_CASE("value-initialized filename zeroes out") {
  gls::filename const t{};
  REQUIRE(t.c_str() == nullptr);  // XXX: should this be the empty string?
}

TEST_CASE("filename constructed with a C string compiles") {
  gls::filename const t("a");
}

TEST_CASE("8 characters filename constructed with a C string equals c_str()") {
  gls::filename const t("01234567");
  REQUIRE(std::string("01234567") == t.c_str());
}

TEST_CASE("1 character filename constructed with a C string equals c_str()") {
  gls::filename const t("a");
  REQUIRE(std::string("a") == t.c_str());
}

TEST_CASE("empty filename constructed with a C string equals c_str()") {
  gls::filename const t("");
  REQUIRE(std::string("") == t.c_str());
}
