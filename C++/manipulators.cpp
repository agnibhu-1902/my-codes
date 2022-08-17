#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    bool x = true, y = false;
    cout << "The value of 'x' using default: " << x << endl;
    cout << "The value of 'y' using default: " << y << endl;
    cout << "The value of 'x' using manipulator: " << boolalpha << x << endl;
    cout << "The value of 'y' using manipulator: " << y << endl
         << endl;
    int a = 1234;
    cout << "Value of 'a' in decimal: " << a << endl;
    cout << "Value of 'a' in octal: " << oct << a << endl;
    cout << "Value of 'a' in hexadecimal: " << hex << a << endl
         << endl;
    cout << "Base of 'a' in decimal: " << showbase << dec << a << endl;
    cout << "Base of 'a' in octal: " << showbase << oct << a << endl;
    cout << "Base of 'a' in hexadecimal: " << showbase << uppercase << hex << a << endl
         << endl;
    float z = 12.0;
    cout << "Print decimal value: " << showpoint << showpos << z << endl
         << endl;
    // Declaration
    double w = 1237234.1235;
    // Applying common formats
    cout << fixed << setprecision(2) << setfill('*');
    // Printing x in three formats
    cout << setw(15) << left << w << endl;
    cout << setw(15) << internal << w << endl;
    cout << setw(15) << right << w << endl
         << endl;
    x = 0;
    cout << "Enter true or false: ";
    cin >> boolalpha >> x;
    cout << "Value: " << noboolalpha << dec << x << endl
         << endl;
    cout << "Enter value in hex: ";
    cin >> hex >> a;
    cout << "Value: " << hex << a << endl;
    return 0;
}