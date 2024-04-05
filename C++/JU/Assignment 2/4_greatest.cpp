#include <iostream>
using namespace std;

class Base
{
    public:
        class Child
        {
            int a, b, c;
            public:
                Child(int, int, int);
                void greatest();
        };
};

Base :: Child :: Child(int num1, int num2, int num3)
    : a(num1), b(num2), c(num3)
{
}

void Base :: Child :: greatest()
{
    if (a > b && a > c)
        cout << a << " is greatest" << endl;
    else if (b > a && b > c)
        cout << b << " is greatest" << endl;
    else
        cout << c << " is greatest" << endl;
}

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    Base :: Child child1(a, b, c);
    child1.greatest();
    return 0;
}