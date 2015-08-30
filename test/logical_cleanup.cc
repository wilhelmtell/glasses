#include <catch/catch.hpp>
#include "../src/logical_cleanup.hh"

TEST_CASE("logical_cleanup ctor") {
  int touched = 0;

  SECTION("no cleanup with default ctor inside guard scope") {
    tls::logical_cleanup guard;
    REQUIRE(touched == 0);
  }

  SECTION("no cleanup with default ctor outside guard scope") {
    { tls::logical_cleanup guard; }
    REQUIRE(touched == 0);
  }

  SECTION("no cleanup with cleanup ctor inside guard scope") {
    tls::logical_cleanup guard([&]() { ++touched; });
    REQUIRE(touched == 0);
  }

  SECTION("cleanup with cleanup ctor outside guard scope") {
    {
      tls::logical_cleanup guard([&]() { ++touched; });
    }
    REQUIRE(touched == 1);
  }

  SECTION("no cleanup with default ctor inside guard scope, and a move") {
    tls::logical_cleanup guard;
    tls::logical_cleanup guard2(std::move(guard));
    REQUIRE(touched == 0);
  }

  SECTION("no cleanup with default ctor outside guard scope, and a move") {
    {
      tls::logical_cleanup guard;
      tls::logical_cleanup guard2(std::move(guard));
    }
    REQUIRE(touched == 0);
  }

  SECTION("no cleanup with cleanup ctor inside guard scope, and a move") {
    tls::logical_cleanup guard([&]() { ++touched; });
    auto guard2 = std::move(guard);
    REQUIRE(touched == 0);
  }

  SECTION("cleanup with cleanup ctor outside guard scope, and a move") {
    {
      tls::logical_cleanup guard([&]() { ++touched; });
      auto guard2 = std::move(guard);
    }
    REQUIRE(touched == 1);
  }

  SECTION(
    "no cleanup with default ctor inside guard scope, and a move-assign") {
    tls::logical_cleanup guard;
    tls::logical_cleanup guard2;
    guard2 = std::move(guard);
    REQUIRE(touched == 0);
  }

  SECTION(
    "no cleanup with default ctor outside guard scope, and a move-assign") {
    {
      tls::logical_cleanup guard;
      tls::logical_cleanup guard2;
      guard2 = std::move(guard);
    }
    REQUIRE(touched == 0);
  }

  SECTION(
    "no cleanup with cleanup ctor inside guard scope, and a move-assign") {
    tls::logical_cleanup guard([&]() { ++touched; });
    tls::logical_cleanup guard2;
    guard2 = std::move(guard);
    REQUIRE(touched == 0);
  }

  SECTION("cleanup with cleanup ctor outside guard scope, and a move-assign") {
    {
      tls::logical_cleanup guard([&]() { ++touched; });
      tls::logical_cleanup guard2;
      guard2 = std::move(guard);
    }
    REQUIRE(touched == 1);
  }
}
