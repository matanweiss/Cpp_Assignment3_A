#include <string>
#include <iostream>

namespace ariel
{
};

class Fraction
{
    int numerator;
    int denominator;

public:
    Fraction(int, int);
    friend std::ostream &operator<<(std::ostream &, const Fraction &);
    friend std::istream &operator>>(std::istream &, const Fraction &);
    Fraction operator+(const Fraction &);
    Fraction operator-(const Fraction &);
    Fraction operator/(const Fraction &);
    Fraction operator*(const Fraction &);
    friend Fraction operator*(float, const Fraction &);
    friend Fraction operator-(float, const Fraction &);
    friend Fraction operator/(float, const Fraction &);
    friend Fraction operator+(float, const Fraction &);
    Fraction operator+(float);
    Fraction operator-(float);
    Fraction operator*(float);
    Fraction operator/(float);
    Fraction &operator++();
    Fraction operator++(int dummy);
    Fraction &operator--();
    Fraction operator--(int dummy);
    bool operator<=(Fraction const &);
    bool operator>=(Fraction const &);
    bool operator<(Fraction const &);
    bool operator>(Fraction const &);
    bool operator>(float);
    bool operator<(float);
    bool operator>=(float);
    bool operator<=(float);
    friend bool operator<=(float, Fraction const &);
    friend bool operator>=(float, Fraction const &);
    friend bool operator<(float, Fraction const &);
    friend bool operator>(float, Fraction const &);
    bool operator==(Fraction const &);
    bool operator==(float);
    friend bool operator==(float, Fraction const &);
};

// }