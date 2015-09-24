#include <catch/catch.hpp>
#include "../src/ttf_filename.hh"
#include <string>

TEST_CASE("default-constructed ttf_filename compiles") { gls::ttf_filename t; }

TEST_CASE("value-initialized ttf_filename zeroes out") {
  gls::ttf_filename const t{};
  REQUIRE(t.c_str() == nullptr);  // XXX: should this be the empty string?
}

TEST_CASE("ttf_filename constructed with a C string compiles") {
  gls::ttf_filename const t("a");
}

TEST_CASE(
  "8 characters ttf_filename constructed with a C string equals c_str()") {
  gls::ttf_filename const t("01234567");
  REQUIRE(std::string("01234567") == t.c_str());
}

TEST_CASE(
  "1 character ttf_filename constructed with a C string equals c_str()") {
  gls::ttf_filename const t("a");
  REQUIRE(std::string("a") == t.c_str());
}

TEST_CASE("empty ttf_filename constructed with a C string equals c_str()") {
  gls::ttf_filename const t("");
  REQUIRE(std::string("") == t.c_str());
}
