#include <iostream>
using namespace std;

class Parent
{   
    protected:
        static bool childinstance;
    public:
        ~Parent()
        {
            if (childinstance)
            {
                cerr << "Cannot destroy parent object without destroying child" << endl;
                exit(1);
            }
            cout << "Destructor of Parent" << endl;
        }
        class Child
        {
            public:
                Child()
                {
                    Parent::childinstance = true;
                }
                ~Child()
                {

                    cout << "Destructor of Child" << endl;
                }
        };
};

bool Parent::childinstance = false;

int main()
{
    Parent *parent = new Parent();
    Parent::Child *child = new Parent::Child();
    delete parent;
    return 0;
}