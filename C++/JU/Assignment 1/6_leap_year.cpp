#include <iostream>
using namespace std;
class Year
{
    int year;
    public:
        Year(int);
        ~Year();
        bool isLeapYear();
};
Year :: Year(int y)
    : year(y)
{
    cout << "Constructor called!" << endl;
}
Year :: ~Year()
{
    cout << "Destructor called!" << endl;
}
bool Year :: isLeapYear()
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;
    Year yrobj(year);
    if (yrobj.isLeapYear())
        cout << "Entered year is a leap year." << endl;
    else
        cout << "Entered year is not a leap year." << endl;
    return 0;
}