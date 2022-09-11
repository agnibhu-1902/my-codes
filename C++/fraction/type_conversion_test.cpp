#include "fraction.h"
#include <typeinfo>
#include <iostream>
using namespace std;

int main(void)
{
    Fraction frac1(10,20);
    Fraction frac;
    frac = frac1 + Fraction(10);
    cout << typeid(frac).name() << endl;
    frac = frac1 + Fraction(20.5);
    cout << typeid(frac).name() << endl;
    int n = static_cast<int>(frac);
    cout << typeid(n).name() << endl;
    double d = static_cast<double>(frac);
    cout << typeid(d).name() << endl;
    return 0;
}