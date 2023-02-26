#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "./rational.h"
#include "sstream"

TEST_CASE("testing the rational functions") {
    CHECK(Rational(1, 2) + Rational(3, 4) == Rational(5, 4));
    CHECK(Rational(3, 4) - Rational(1, 2) == Rational(1, 4));
    CHECK(Rational(3, 4) * Rational(1, 2) == Rational(3, 8));
    CHECK(Rational(3, 4) / Rational(1, 2) == Rational(3, 2));
    CHECK(Rational(3, 4) / Rational(0, 2) == Rational(1, 4));
    CHECK(Rational(3, 0) == Rational(3, 0));
}