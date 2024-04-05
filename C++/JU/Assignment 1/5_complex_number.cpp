#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;
    public:
        Complex();
        Complex(int);
        Complex(int, int);
        void show();
        Complex sum(Complex);
};
Complex :: Complex()
    : real(0), imaginary(0)
{
}
Complex :: Complex(int r)
    : real(r), imaginary(0)
{
}
Complex :: Complex(int r, int im)
    : real(r), imaginary(im)
{
}
void Complex :: show()
{
    cout << real << " + " << imaginary << "i" << endl;
}
Complex Complex :: sum(Complex obj)
{
    Complex csum;
    csum.real = this->real + obj.real;
    csum.imaginary = this->imaginary + obj.imaginary;
    return csum;
}
int main()
{
    Complex obj1, obj2(5), obj3(3, 4), obj4(2, 3);
    cout << "Object 1: "; obj1.show();
    cout << "Object 2: "; obj2.show();
    cout << "Object 3: "; obj3.show();
    cout << "Object 4: "; obj4.show();
    Complex sumobj = obj3.sum(obj4);
    cout << "Sum of objects 3 & 4: "; sumobj.show();
    return 0;
}