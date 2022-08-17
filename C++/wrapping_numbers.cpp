#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int num1 = numeric_limits<int>::max();
    int num2 = numeric_limits<int>::min();
    cout << "Value of maximum signed int: " << num1 << endl;
    cout << "Value of minimum signed int: " << num2 << endl;
    num1 += 1;
    num2 -= 1;
    cout << "Value of num1 + 1 after overflow: " << num1 << endl;
    cout << "Value of num2 - 1 after underflow: " << num2 << endl;
    return 0;
}