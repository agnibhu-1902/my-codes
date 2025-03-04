#include <stdexcept>
#include <iostream>
using namespace std;

int quotient(int, int);

int main(void)
{
    int num1, num2, result;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter an integer: ";
        cin >> num1;
        cout << "Enter another integer: ";
        cin >> num2;
        // try-catch block
        try
        {
            cout << "Result of division: " << quotient(num1, num2) << endl;
        }
        catch (invalid_argument ex)
        {
            cout << ex.what() << endl;
        }
    }
    return 0;
}

int quotient(int first, int second)
{
    if (second == 0)
        throw invalid_argument("Error! Divide by zero!");
    return first / second;
}