#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;
    public:
        friend istream& operator>>(istream &, Complex &);
        friend ostream& operator<<(ostream &, Complex const &);
        Complex operator+(Complex const &);
};

istream& operator>>(istream &in, Complex &c)
{
    cout << "Real part: ";
    in >> c.real;
    cout << "Imaginary part: ";
    in >> c.imaginary;
    return in;
}

ostream& operator<<(ostream &out, Complex const &c)
{
    out << c.real << "+" << c.imaginary <<"i";
    return out;
}

Complex Complex :: operator+(Complex const &obj)
{
    Complex res;
    res.real = real + obj.real;
    res.imaginary = imaginary + obj.imaginary;
    return res;
}

int main()
{
    Complex c1, c2, res;
    cout << "Enter first complex number:" << endl;
    cin >> c1;
    cout << "Enter second complex number:" << endl;
    cin >> c2;
    res = c1 + c2;
    cout << "First complex number: " << c1 << endl;
    cout << "Second complex number: " << c2 << endl;
    cout << "Resultant complex number: " << res << endl;
    return 0;
}