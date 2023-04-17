#include "Fraction.hpp"

Fraction::Fraction(int number1, int number2) {}
std::ostream &operator<<(std::ostream &stream, const Fraction &fraction) { return stream; }
std::istream &operator>>(std::istream &stream, const Fraction &fraction) { return stream; }
Fraction Fraction::operator+(const Fraction &other) { return other; }
Fraction Fraction::operator-(const Fraction &other) { return other; }
Fraction Fraction::operator/(const Fraction &other) { return other; }
Fraction Fraction::operator*(const Fraction &other) { return other; }
Fraction operator*(float number, const Fraction &other) { return other; }
Fraction operator-(float number, const Fraction &other) { return other; }
Fraction operator/(float number, const Fraction &other) { return other; }
Fraction operator+(float number, const Fraction &other) { return other; }
Fraction Fraction::operator+(float number) { return *this; }
Fraction Fraction::operator-(float numeber) { return *this; }
Fraction Fraction::operator*(float numeber) { return *this; }
Fraction Fraction::operator/(float numeber) { return *this; }
Fraction &Fraction::operator++() { return *this; }
Fraction Fraction::operator++(int dummy) { return *this; }
Fraction &Fraction::operator--() { return *this; }
Fraction Fraction::operator--(int dummy) { return *this; }
bool Fraction::operator<=(Fraction const &fraction) { return true; }
bool Fraction::operator>=(Fraction const &) { return true; }
bool Fraction::operator<(Fraction const &) { return true; }
bool Fraction::operator>(Fraction const &) { return true; }
bool Fraction::operator>(float) { return true; }
bool Fraction::operator<(float) { return true; }
bool Fraction::operator>=(float) { return true; }
bool Fraction::operator<=(float) { return true; }
bool operator<=(float number, Fraction const &fraction) { return true; }
bool operator>=(float number, Fraction const &fraction) { return true; }
bool operator<(float number, Fraction const &fraction) { return true; }
bool operator>(float number, Fraction const &fraction) { return true; }
bool Fraction::operator==(Fraction const &fraction) { return true; }
bool Fraction::operator==(float number) { return true; }
bool operator==(float number, Fraction const &fraction) { return true; }
