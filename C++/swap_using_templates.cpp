#include <iostream>
using namespace std;

template <typename T>
void exchange(T& first, T& second)
{
    T temp = first;
    first = second;
    second = temp;
}

int main(void)
{
    int integer1 = 5, integer2 = 70;
    exchange(integer1, integer2);
    cout << "After swapping:" << endl;
    cout << integer1 << "\t" << integer2 << endl << endl;
    double double1 = 101.5, double2 = 402.7;
    exchange(double1, double2);
    cout << "After swapping:" << endl;
    cout << double1 << "\t" << double2 << endl;
    return 0;
}