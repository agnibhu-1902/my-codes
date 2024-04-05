#include <iostream>
#include <cmath>
using namespace std;
class Number
{
    int number;
    public:
        Number(int);
        int square();
};
Number :: Number(int num)
    : number(num)
{
}
inline int Number :: square()
{
    return pow(number, 2);
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    Number obj(number);
    cout << "Square of " << number << " is " << obj.square() << endl;
    return 0;
}