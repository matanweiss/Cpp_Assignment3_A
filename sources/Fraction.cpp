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
bool Fraction::operator<=(const Fraction &fraction) const { return false; }
bool Fraction::operator>=(const Fraction &fraction) const { return false; }
bool Fraction::operator<(const Fraction &fraction) const { return false; }
bool Fraction::operator>(const Fraction &fraction) const { return false; }
bool Fraction::operator>(float) { return false; }
bool Fraction::operator<(float) { return false; }
bool Fraction::operator>=(float) { return false; }
bool Fraction::operator<=(float) { return false; }
bool operator<=(float number, const Fraction &fraction) { return false; }
bool operator>=(float number, const Fraction &fraction) { return false; }
bool operator<(float number, const Fraction &fraction) { return false; }
bool operator>(float number, const Fraction &fraction) { return false; }
bool Fraction::operator==(const Fraction &fraction) const { return false; }
bool Fraction::operator==(float number) { return false; }
bool operator==(float number, const Fraction &fraction) { return false; }
