#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;
    public:
        void getdata();
        bool isequal() const;
        void putdata() const;
};

void Rectangle :: getdata()
{
    do
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    } while (length < 0 || breadth < 0);
}

void Rectangle :: putdata() const
{
    cout << "Length: " << length << endl;
    cout << "Breadth: " << breadth << endl;
}

bool Rectangle :: isequal() const
{
    return length == breadth;
}

int main()
{
    const int n = 5;
    Rectangle *arr = new Rectangle[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of rectangle " << i + 1 << ":" << endl;
        arr[i].getdata();
    }
    cout << "Details of rectangles whose length and breadth are equal:" << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].isequal())
        {
            cout << "Rectangle " << i + 1 << ":" << endl;
            arr[i].putdata();
        }
    }
    delete[] arr;
    return 0;
}