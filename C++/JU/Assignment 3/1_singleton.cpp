#include <iostream>
#pragma GCC diagnostic ignored "-Wc++11-extensions"
using namespace std;

class Singleton
{
    static Singleton* instanceptr;
    int data;
    Singleton(int);
    ~Singleton();
    public:
        Singleton(const Singleton &) = delete;
        static Singleton* getinstance(int);
        void print();
};

Singleton* Singleton::instanceptr = nullptr;

Singleton::Singleton(int data)
    : data(data)
{
}

Singleton::~Singleton()
{
    delete instanceptr;
}

Singleton* Singleton::getinstance(int data)
{
    if (instanceptr == nullptr)
        instanceptr = new Singleton(data);
    return instanceptr;
}

void Singleton::print()
{
    cout << "Data: " << data << endl;
}

int main()
{
    cout << "Values of first instance of 'Singleton':" << endl;
    Singleton* newinstance = Singleton::getinstance(30);
    newinstance->print();
    cout << "Values after trying to create a second instance of 'Singleton':" << endl;
    Singleton* dupinstance = Singleton::getinstance(40);
    dupinstance->print();
    return 0;
}