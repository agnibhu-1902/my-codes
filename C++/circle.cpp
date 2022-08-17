#include<iostream>
using namespace std;

int main()
{
    const float PI = 3.14159; unsigned int r;
    cout<<"Enter radius: ";
    cin>>r;
    cout<<"Area: "<<PI*r*r<<endl<<"Perimeter: "<<2U*PI*r<<endl;
    return 0;
}