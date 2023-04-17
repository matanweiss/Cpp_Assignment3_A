#include "doctest.h"
#include "sources/Fraction.hpp"

TEST_CASE("Comparison")
{
    // Fraction (operator) Fraction
    CHECK(Fraction(4, 5) < Fraction(4, 4));
    CHECK(Fraction(4, 5) <= Fraction(4, 5));
    CHECK(Fraction(4, 5) >= Fraction(4, 6));
    CHECK(Fraction(4, 5) > Fraction(4, 6));

    // Fraction (operator) float
    CHECK(Fraction(4, 5) < 4.5);
    CHECK(Fraction(4, 5) <= 0.8);
    CHECK(Fraction(4, 5) >= 0.8);
    CHECK(Fraction(4, 5) > 0.7);

    // float (operator) Fraction
    CHECK(4.5 < Fraction(4, 5));
    CHECK(0.8 <= Fraction(4, 5));
    CHECK(0.8 >= Fraction(4, 5));
    CHECK(0.7 > Fraction(4, 5));
}