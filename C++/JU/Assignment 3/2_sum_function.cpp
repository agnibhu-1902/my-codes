#include <iostream>
#pragma GCC diagnostic ignored "-Wc++11-extensions"
using namespace std;

int sum()
{
    return 0;
}

template <typename... Args>
int sum(int first, Args... rest)
{
    return first + sum(rest...);
}

int main()
{
    cout << "Sum1: " << sum(1,2,3,4,5) << endl;
    cout << "Sum2: " << sum(5, 10, 15) << endl;
    cout << "Sum3: " << sum(2, -1) << endl;
}