#include <iostream>
using namespace std;

class Mammals
{
    public:
        void print()
        {
            cout << "I am mammal" << endl;
        }
};

class Marine_Animals
{
    public:
        void print()
        {
            cout << "I am a marine animal" << endl;
        }
};

class Blue_Whale : public Mammals, public Marine_Animals
{
    public:
        void print()
        {
            cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
        }
};

int main()
{
    Mammals mammalobj; Marine_Animals marineanimalobj; Blue_Whale bluewhaleobj;
    mammalobj.print();
    marineanimalobj.print();
    bluewhaleobj.print();
    bluewhaleobj.Mammals::print();
    bluewhaleobj.Marine_Animals::print();
    return 0;
}