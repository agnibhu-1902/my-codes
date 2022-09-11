#include "array.h"

int main(void)
{
    cout << "Enter array size: ";
    int n;
    cin >> n;
    Array arr(n);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Entered element at index " << i << ": " << arr[i] << endl;
    }
    return 0;
}