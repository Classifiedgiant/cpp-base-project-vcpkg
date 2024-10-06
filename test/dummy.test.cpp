#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

namespace DummyTest {

TEST_CASE("Testing the tests") {
  CHECK(1 == 1);
  CHECK_THROWS(throw std::invalid_argument("testy test"));
}

TEST_CASE("Please work in here") {
  CHECK(1 == 1);
  CHECK_THROWS(throw std::invalid_argument("testy test"));
}
} // namespace DummyTest
