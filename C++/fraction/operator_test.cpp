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
        cout << "\n+ operator test: ";
        disp.print();
    }
    {
        Fraction disp(-fraction1);
        cout << "- operator test: ";
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
    return 0;
}
