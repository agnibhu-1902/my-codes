#include <iostream>
using namespace std;

int main(void)
{
    int num1, num2, result;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter numerator: ";
        cin >> num1;
        cout << "Enter denominator: ";
        cin >> num2;
        // try-catch block
        try
        {
            if (num2 == 0)
                throw 0;
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
        catch (int x)
        {
            cout << "Division by " << x << " cannot be performed." << endl;
        }
    }
    return 0;
}