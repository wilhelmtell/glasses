#define CATCH_CONFIG_MAIN
#include "../src/logical_cleanup.hh"
#include <catch/catch.hpp>

TEST_CASE("logical_cleanup ctor") {
  int touched = 0;

  SECTION("no cleanup with default ctor inside guard scope") {
    gls::logical_cleanup guard;
    REQUIRE(touched == 0);
  }

  SECTION("no cleanup with default ctor outside guard scope") {
    { gls::logical_cleanup guard; }
    REQUIRE(touched == 0);
  }

  SECTION("no cleanup with cleanup ctor inside guard scope") {
    gls::logical_cleanup guard([&]() { ++touched; });
    REQUIRE(touched == 0);
  }

  SECTION("cleanup with cleanup ctor outside guard scope") {
    {
      gls::logical_cleanup guard([&]() { ++touched; });
    }
    REQUIRE(touched == 1);
  }

  SECTION("no cleanup with default ctor inside guard scope, and a move") {
    gls::logical_cleanup guard;
    gls::logical_cleanup guard2(std::move(guard));
    REQUIRE(touched == 0);
  }

  SECTION("no cleanup with default ctor outside guard scope, and a move") {
    {
      gls::logical_cleanup guard;
      gls::logical_cleanup guard2(std::move(guard));
    }
    REQUIRE(touched == 0);
  }

  SECTION("no cleanup with cleanup ctor inside guard scope, and a move") {
    gls::logical_cleanup guard([&]() { ++touched; });
    auto guard2 = std::move(guard);
    REQUIRE(touched == 0);
  }

  SECTION("cleanup with cleanup ctor outside guard scope, and a move") {
    {
      gls::logical_cleanup guard([&]() { ++touched; });
      auto guard2 = std::move(guard);
    }
    REQUIRE(touched == 1);
  }

  SECTION(
    "no cleanup with default ctor inside guard scope, and a move-assign") {
    gls::logical_cleanup guard;
    gls::logical_cleanup guard2;
    guard2 = std::move(guard);
    REQUIRE(touched == 0);
  }

  SECTION(
    "no cleanup with default ctor outside guard scope, and a move-assign") {
    {
      gls::logical_cleanup guard;
      gls::logical_cleanup guard2;
      guard2 = std::move(guard);
    }
    REQUIRE(touched == 0);
  }

  SECTION(
    "no cleanup with cleanup ctor inside guard scope, and a move-assign") {
    gls::logical_cleanup guard([&]() { ++touched; });
    gls::logical_cleanup guard2;
    guard2 = std::move(guard);
    REQUIRE(touched == 0);
  }

  SECTION("cleanup with cleanup ctor outside guard scope, and a move-assign") {
    {
      gls::logical_cleanup guard([&]() { ++touched; });
      gls::logical_cleanup guard2;
      guard2 = std::move(guard);
    }
    REQUIRE(touched == 1);
  }
}
