#include <iostream>
#include <cassert>
#include <cmath>
#include "fraction.h"
using namespace std;

Fraction ::Fraction(int num, int den)
    :   numer(num), denom(den)
{
    normalize();
}
Fraction ::Fraction()
    : numer(1), denom(1)
{
}
Fraction ::~Fraction()
{
}
int Fraction ::getNumer() const
{
    return numer;
}
int Fraction ::getDenom() const
{
    return denom;
}
void Fraction ::print() const
{
    cout << numer << "/" << denom << endl;
}
void Fraction ::setNumer(int numer)
{
    this -> numer = numer;
    normalize();
}
void Fraction ::setDenom(int denom)
{
    this -> denom = denom;
    normalize();
}
void Fraction ::normalize()
{
    if(denom == 0)
    {
        cout << "Division by zero not allowed!\nQuitting..." << endl;
        assert(false);
    }
    else if(denom < 0)
    {
        denom = -denom;
        numer = -numer;
    }
    else
    {
        int divisor = gcd(abs(numer), abs(denom));
        numer /= divisor;
        denom /= divisor;
    }
}
int Fraction ::gcd(int numer, int denom) const
{
    int gcd = 1;
    for(int i = 1; i <= numer && i <= denom; i++)
    {
        if(numer % i == 0 && denom % i == 0)
            gcd = i;
    }
    return gcd;
}
const Fraction Fraction :: operator+() const
{
    Fraction temp(+numer, denom);
    return temp;
}
const Fraction Fraction :: operator-() const
{
    Fraction temp(-numer, denom);
    return temp;
}
Fraction& Fraction :: operator++()
{
    numer = numer + denom;
    this -> normalize();
    return *this;
}
Fraction& Fraction :: operator--()
{
    numer = numer - denom;
    this -> normalize();
    return *this;
}
const Fraction Fraction :: operator++(int dummy)
{
    Fraction temp(numer, denom);
    ++(*this);
    return temp;
}
const Fraction Fraction :: operator--(int dummy)
{
    Fraction temp(numer, denom);
    --(*this);
    return temp;
}
Fraction& Fraction :: operator=(const Fraction& right)
{
    if(this != &right)
    {
        numer = right.numer;
        denom = right.denom;
    }
    return *this;
}
Fraction& Fraction :: operator+=(const Fraction& right)
{
    numer = numer * right.denom + denom * right.numer;
    denom = denom * right.denom;
    normalize();
    return *this;
}
Fraction& Fraction :: operator-=(const Fraction& right)
{
    numer = numer * right.denom - denom * right.numer;
    denom = denom * right.denom;
    normalize();
    return *this;
}
Fraction& Fraction :: operator*=(const Fraction& right)
{
    numer = numer * right.numer;
    denom = denom * right.denom;
    normalize();
    return *this;
}
Fraction& Fraction :: operator/=(const Fraction& right)
{
    numer = numer * right.denom;
    denom = denom * right.numer;
    normalize();
    return *this;
}
const Fraction operator+(const Fraction& left, const Fraction& right)
{
    int newNumer = left.numer * right.denom + right.numer * left.denom;
    int newDenom = left.denom * right.denom;
    Fraction result(newNumer, newDenom);
    return result;
}
const Fraction operator-(const Fraction& left, const Fraction& right)
{
    int newNumer = left.numer * right.denom - right.numer * left.denom;
    int newDenom = left.denom * right.denom;
    Fraction result(newNumer, newDenom);
    return result;
}
const Fraction operator*(const Fraction& left, const Fraction& right)
{
    int newNumer = left.numer * right.numer;
    int newDenom = left.denom * right.denom;
    Fraction result(newNumer, newDenom);
    return result;
}
const Fraction operator/(const Fraction& left, const Fraction& right)
{
    int newNumer = left.numer * right.denom;
    int newDenom = left.denom * right.numer;
    Fraction result(newNumer, newDenom);
    return result;
}