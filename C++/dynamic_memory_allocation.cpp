#include <iostream>
using namespace std;

int main(void)
{
    unsigned int no;
    cout << "Enter the number of array elements: ";
    cin >> no;
    int *pArr = new int[no];
    for (int i = 0; i < no; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> pArr[i];
    }
    cout << "\nThe elements are:" << endl;
    for (int i = 0; i < no; i++)
        cout << pArr[i] << '\t';
    cout << endl;
    delete[] pArr;
    return 0;
}