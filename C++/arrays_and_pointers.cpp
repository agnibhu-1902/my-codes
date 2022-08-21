/*************************************************************** * The program proves that the system stores the address of each * * element in the array in a constant pointer. * ***************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Declaration of an array of five int
    int arr[5];
    // Printing the addresses through pointers and the & operator
    for (int i = 0; i < 5; i++)
    {
        cout << "Address of cell " << i << " Using pointer: ";
        cout << arr + i << endl;
        cout << "Address of cell " << i << " Using & operator: ";
        cout << &arr[i] << endl
             << endl;
    }
    cout << endl << "Pointer subtraction:" << endl;
    int *ptr1 = arr+2, *ptr2 = arr+4;
    cout << "ptr1 - ptr2: " << ptr1 - ptr2 << "\nptr2 - ptr1: " << ptr2 - ptr1 << endl;
    //Pointer addition is not allowed in C++
    return 0;
}