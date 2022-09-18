#include <iostream>
using namespace std;

template <typename T, unsigned int N>
void print(T (&array)[N])
{
    for (int i = 0; i < N; i++)
        cout << array[i] << "\t";
    cout << endl;
}

int main(void)
{
    int array1[] = {7, 3, 5, 1};
    double array2[] = {7.5, 6.1, 4.6};
    print(array1);
    print(array2);
    return 0;
}