#include <string>
#include <iostream>

class Fraction
{
    int numerator;
    int denominator;

public:
    Fraction(int, int);
};

namespace ariel
{
    std::ostream &operator<<(std::ostream &, const ::Fraction &);
}