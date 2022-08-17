#include <iostream>
using namespace std;

int main()
{
    int i, n, sum = 0, w;
    for (i = 1;; i++)
    {
        cout << "Enter value (0 to quit): ";
        cin >> n;
        if (n == 0)
            goto jump;
        else
            sum += n;
    }
jump:
    cout << "Average: " << static_cast<double>(sum) / (i - 1) << endl;
    return 0;
}