#include<iostream>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
    }
    virtual void print() const
    {
        cout << "In the Base class." << endl;
    }
};

class Derived: public Base
{
public:
    void print() const
    {
        cout << "In the Derived class." << endl;
    }
};

int main(void)
{
    Base* ptr;
    ptr=new Base();
    ptr->print();
    delete ptr;
    ptr=new Derived();
    ptr->print();
    delete ptr;
    return 0;
    ptr=new Base();
    Derived* sptr=dynamic_cast<Derived*>(ptr); // Type checking (sptr is a child of ptr since ptr can be downcast to sptr)
    delete sptr; delete ptr;
}