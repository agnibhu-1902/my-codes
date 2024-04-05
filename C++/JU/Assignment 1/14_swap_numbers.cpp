#include <iostream>
using namespace std;

class Swap
{
    int a, b;
    public:
        Swap(int, int);
        friend void swap_members(Swap &);
        void print();
};

Swap :: Swap(int num1, int num2)
    : a(num1), b(num2)
{
}

void swap_members(Swap &obj)
{
    obj.a += obj.b;
    obj.b = obj.a - obj.b;
    obj.a -= obj.b;
}

void Swap :: print()
{
    cout << "a: " << a << endl << "b: " << b << endl;
}

int main()
{
    int a, b;
    cout << "Enter values of 'a' and 'b': ";
    cin >> a >> b;
    Swap obj(a, b);
    cout << "Before swapping:" << endl;
    obj.print();
    swap_members(obj);
    cout << "After swapping:" << endl;
    obj.print();
    return 0;
}