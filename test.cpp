#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

TEST_CASE("passing test example") {
  REQUIRE(1 + 1 == 2);
}

TEST_CASE("failing test example") {
  REQUIRE(1 + 3 == 2);
}
