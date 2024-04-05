#include <iostream>
using namespace std;
class Number_List
{
    private:
        int size;
        int *arr;
    public:
        ~Number_List();
        void input(int);
        void printarr();
        void sort();
        int minimum();
        int maximum();
};
void Number_List :: input(int size)
{
    this->size = size;
    arr = new int[size];
    cout << "Enter array elements: ";
    for (int i = 0; i < this->size; i++)
        cin >> arr[i];
}
void Number_List :: printarr()
{
    cout << "Array elements:";
    for (int i = 0; i < size; i++)
        cout << " " << arr[i];
    cout << endl;
}
void Number_List :: sort()
{
    int temp;
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
int Number_List :: minimum()
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}
int Number_List :: maximum()
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
Number_List :: ~Number_List()
{
    delete[] arr;
}
int main()
{
    Number_List list; int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    list.input(size);
    list.printarr();
    cout << "Sorting..." << endl;
    list.sort();
    list.printarr();
    cout << "Minimum element: " << list.minimum() << endl;
    cout << "Maximum element: " << list.maximum() << endl;
    return 0;
}