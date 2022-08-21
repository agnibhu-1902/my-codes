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