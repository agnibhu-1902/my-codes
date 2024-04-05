#include <iostream>
using namespace std;

class Base
{
    int dummy;
    public:
        Base(Base &);
        Base(int);
        Base();
        void print();
        virtual ~Base();
};

Base :: Base()
{
    cout << "Called default constructor of Base class" << endl;
}

Base :: Base(Base &obj)
    : dummy(obj.dummy)
{
    cout << "Copy constructor called" << endl;
}

Base :: Base(int d)
    : dummy(d)
{
    cout << "Parameterized constructor called" << endl;
}

Base :: ~Base()
{
    cout << "Called destructor of Base class" << endl;
}

void Base :: print()
{
    cout << "Dummy value: " << dummy << endl;
}

class Derived : public Base
{
    public:
        Derived();
        ~Derived();
};

Derived :: Derived()
{
    cout << "Called default constructor of Derived class" << endl;
}

Derived :: ~Derived()
{
    cout << "Called destructor of Derived class" << endl;
}

int main()
{
    Base obj1(10);
    cout << "Value after calling parameterized constructor:" << endl;
    obj1.print();
    Base obj2(obj1);
    cout << "Value after calling copy constructor:" << endl;
    obj2.print();
    Base *obj = new Derived();
    cout << "Value after calling default constructor of Derived class:" << endl;
    obj->print();
    delete obj;
    return 0;
}