#include <iostream>
#include "fraction.h"
using namespace std;

int main(void)
{
    unsigned short ch; bool flag;
    int numer, denom;
    cout << "For first fraction:" << endl;
    cout << "\n\tEnter numerator: ";
    cin >> numer;
    cout << "\tEnter denominator: ";
    cin >> denom;
    Fraction fraction1(numer, denom);
    cout << "\nFor second fraction:" << endl;
    cout << "\n\tEnter numerator: ";
    cin >> numer;
    cout << "\tEnter denominator: ";
    cin >> denom;
    Fraction fraction2(numer, denom);
    {
        Fraction disp(+fraction1);
        cout << "\nunary + operator test: ";
        disp.print();
    }
    {
        Fraction disp(-fraction1);
        cout << "unary - operator test: ";
        disp.print();
    }
    {
        Fraction disp(++fraction1);
        cout << "prefix ++ operator test: ";
        disp.print();
    }
    {
        Fraction disp(--fraction1);
        cout << "prefix -- operator test: ";
        disp.print();
    }
    {
        Fraction disp(fraction1++);
        cout << "postfix ++ operator test: ";
        disp.print();
    }
    {
        Fraction disp(fraction1--);
        cout << "postfix -- operator test: ";
        disp.print();
    }
    {
        Fraction disp(fraction1=fraction2);
        cout << "= operator test: ";
        disp.print();
    }
    {
        Fraction disp(fraction1+=fraction2);
        cout << "+= operator test: ";
        disp.print();
    }
    {
        Fraction disp(fraction1-=fraction2);
        cout << "-= operator test: ";
        disp.print();
    }
    {
        Fraction disp(fraction1*=fraction2);
        cout << "*= operator test: ";
        disp.print();
    }
    {
        Fraction disp(fraction1/=fraction2);
        cout << "/= operator test: ";
        disp.print();
    }
    {
        Fraction frac;
        frac = fraction1 + fraction2;
        cout << "binary + operator test: ";
        frac.print();
    }
    {
        Fraction frac;
        frac = fraction1 - fraction2;
        cout << "binary - operator test: ";
        frac.print();
    }
    {
        Fraction frac;
        frac = fraction1 * fraction2;
        cout << "binary * operator test: ";
        frac.print();
    }
    {
        Fraction frac;
        frac = fraction1 / fraction2;
        cout << "binary / operator test: ";
        frac.print();
    }
    return 0;
}
