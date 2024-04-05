#include <iostream>
using namespace std;
class Calculate
{
    private:
        int n;
        int count(int);
        bool isprime(int);
    public:
        void calculate(int, char, bool);
        void calculate(int, char);
};
int Calculate :: count(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}
bool Calculate :: isprime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
void Calculate :: calculate(int m, char ch, bool dummy)
{
    n = m;
    if (count(n) <= 1)
    {
        cout << "Number of digits must be greater than 1" << endl;
        return;
    }
    int s = 0;
    while (n != 0)
    {
        s = s * 10 + n % 10;
        n /= 10;
    }
    cout << "Reversed number: " << s << endl;
}
void Calculate :: calculate(int m, char ch)
{
    n = m;
    if (count(n) <= 1)
    {
        cout << "Number of digits must be greater than 1" << endl;
        return;
    }
    if (isprime(n))
        cout << n << " is a prime number" << endl;
    else
        cout << n << " is not a prime number" << endl;
}
int main()
{
    int m; char ch; bool dummy;
    cout << "Enter a number: ";
    cin >> m;
    cout << "Press 'r' for reversing the digits of the number or press 'p' to check for prime number." << endl;
    cout << "Enter choice [r/p]: ";
    cin >> ch;
    Calculate calobj;
    if (ch == 'r')
        calobj.calculate(m, ch, dummy);
    else if (ch == 'p')
        calobj.calculate(m, ch);
    else
        cout << "Invalid choice!" << endl;
    return 0;
}