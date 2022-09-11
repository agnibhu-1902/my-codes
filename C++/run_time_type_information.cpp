#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Animal
{
};

class Horse : public Animal
{
};

int main(void)
{
    Animal a;
    Horse h;
    cout << typeid(a).name() << endl;
    cout << typeid(h).name() << endl;
    cout << boolalpha << typeid(a).before(typeid(h)) << endl;
    cout << boolalpha << typeid(h).before(typeid(a)) << endl;
    return 0;
}