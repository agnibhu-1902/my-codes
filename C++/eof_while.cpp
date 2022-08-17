#include<iostream>
using namespace std;

int main()
{
    int sum = 0, n;
    cout << "Enter the first integer (EOF to stop): ";
    while(cin >> n)
    {
        sum += n;
        cout << "Enter the next integer (EOF to stop): ";
    }
    cout << endl << "Sum: " << sum << endl;
    return 0;
}