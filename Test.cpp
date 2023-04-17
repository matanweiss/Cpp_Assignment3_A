#include "doctest.h"
#include "sources/Fraction.hpp"

TEST_CASE("Arithmetic Operators & Reduced Form")
{
    // 3/7 + 5/21 = 14/21 -> 2/3
    CHECK((Fraction(3, 7) + Fraction(5, 21) == Fraction(2, 3)));
    CHECK((((float)3 / 7) + Fraction(5, 21) == Fraction(2, 3)));
    CHECK((Fraction(3, 7) + ((float)5 / 21) == Fraction(2, 3)));

    // (21/4) - (1/4) = 20/4 -> 5/1
    CHECK((Fraction(21, 4) - Fraction(1, 4) == Fraction(5, 1)));
    CHECK((((float)21 / 4) - Fraction(1, 4) == Fraction(5, 1)));
    CHECK((Fraction(21, 4) - ((float)1 / 4) == Fraction(5, 1)));

    // 5/4 * 3/10 = 15/40 -> 3/8
    CHECK((Fraction(5, 4) * Fraction(3, 10) == Fraction(3, 8)));
    CHECK((((float)5 / 4) * Fraction(3, 10) == Fraction(3, 8)));
    CHECK((Fraction(5, 4) * ((float)3 / 10) == Fraction(3, 8)));

    // (6/4) / (4/18) = 108/16 -> 27/4
    CHECK((Fraction(6, 4) / Fraction(4, 18) == Fraction(27, 4)));
    CHECK((((float)6 / 4) / Fraction(4, 18) == Fraction(27, 4)));
    CHECK((Fraction(6, 4) / ((float)4 / 18) == Fraction(27, 4)));
}

TEST_CASE("Comparison Operators")
{
    // Fraction (operator) Fraction
    CHECK((Fraction(4, 5) < Fraction(4, 4)));
    CHECK((Fraction(4, 5) <= Fraction(4, 5)));
    CHECK((Fraction(4, 5) >= Fraction(4, 6)));
    CHECK((Fraction(4, 5) > Fraction(4, 6)));

    // Fraction (operator) float
    CHECK((Fraction(4, 5) < 4.5));
    CHECK((Fraction(4, 5) <= 0.8));
    CHECK((Fraction(4, 5) >= 0.8));
    CHECK((Fraction(4, 5) > 0.7));

    // float (operator) Fraction
    CHECK((4.5 < Fraction(4, 5)));
    CHECK((0.8 <= Fraction(4, 5)));
    CHECK((0.8 >= Fraction(4, 5)));
    CHECK((0.7 > Fraction(4, 5)));
}

TEST_CASE("Constructor")
{
    CHECK_THROWS(Fraction(1, 0));
    CHECK_NOTHROW(Fraction(0, 1));
    CHECK((Fraction(5, 10) == 0.5));
    CHECK((Fraction(15, 3) == 3.0));
    CHECK((Fraction(1, 2) == 0.5));
    CHECK(Fraction(2, 4) == 0.5);
    CHECK((Fraction(200, 400) == 0.5));
    CHECK((Fraction(1, 3) == Fraction(3, 9)));
    CHECK((Fraction(3, 4) == Fraction(9, 12)));
    CHECK((0.75 == Fraction(9, 12)));
}

TEST_CASE("Increment & Decrement Operators")
{
    // increment
    Fraction fraction(1, 1);
    CHECK(fraction++ == Fraction(1, 1));
    CHECK(fraction == Fraction(2, 1));
    CHECK(++fraction == Fraction(3, 1));

    // decrement
    CHECK(fraction-- == Fraction(3, 1));
    CHECK(fraction == Fraction(2, 1));
    CHECK(--fraction == Fraction(1, 1));
}