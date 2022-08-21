#include <iostream>
#include "fraction.h"
using namespace std;

int main(void)
{
    unsigned short ch; bool flag;
    do
    {
        int numer, denom;
        cout << "Enter numerator: ";
        cin >> numer;
        cout << "Enter denominator: ";
        cin >> denom;
        Fraction fraction(numer, denom);
        do
        {
        cout << endl << "===== MENU =====\n1. Display numerator\n2. Display denominator\n3. Display Fraction\n4. Update numerator\n5. Update Denominator\n6. Exit\n\nEnter choice: ";
        cin >> ch;
            switch(ch)
            {
            case 1:
                cout << "\nNumerator: " << fraction.getNumer() << endl << endl;
                break;
            case 2:
                cout << "\nDenominator: " << fraction.getDenom() << endl << endl;
                break;
            case 3:
                cout << "\nFraction: ";
                fraction.print();
                cout << endl;
                break;
            case 4:
                cout << "\nEnter new numerator: ";
                cin >> numer;
                fraction.setNumer(numer);
                cout << "\nValue updated!" << endl << endl;
                break;
            case 5:
                cout << "\nEnter new denominator: ";
                cin >> denom;
                fraction.setDenom(denom);
                cout << "\nValue updated!" << endl << endl;
                break;
            case 6:
                cout << endl << endl;
                break;
            default:
                cout << "\nInvalid choice!" << endl << endl;
            }
        } while (ch != 6);
        cout << "Continue? [0/1]: ";
        cin >> noboolalpha >> flag;
        cout << endl;
    } while(flag);
    return 0;
}