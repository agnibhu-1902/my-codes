#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

class Marks
{
    protected:
        int roll;
        string name;
        float marks;
        static int counter;
    public:
        Marks(string &, float, bool);
        int getroll() const;
        string getname() const;
        float getmarks() const;
};

class Physics: public Marks
{
    public:
        Physics(string &, float, bool);
};

class Chemistry: public Marks
{
    public:
        Chemistry(string &, float, bool);
};

class Mathematics: public Marks
{
    public:
        Mathematics(string &, float, bool);
};

int Marks::counter = 0;

Marks::Marks(string &n, float m, bool toggle)
    : name(n), marks(m)
{
    if (toggle)
        roll = ++counter;
    else
        roll = counter;
}

int Marks::getroll() const
{
    return roll;
}

string Marks::getname() const
{
    return name;
}

float Marks::getmarks() const
{
    return marks;
}

Physics::Physics(string &n, float m, bool t)
    : Marks(n, m, t)
{
}

Chemistry::Chemistry(string &n, float m, bool t)
    : Marks(n, m, t)
{
}

Mathematics::Mathematics(string &n, float m, bool t)
    : Marks(n, m, t)
{
}

int main()
{
    int n; string name; float marks;
    cout << "Enter the number of students: ";
    cin >> n;
    Physics **p = new Physics*[n];
    Chemistry **c = new Chemistry*[n];
    Mathematics **m = new Mathematics*[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter details of student " << i + 1 << ":" << endl;
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter marks in Physics: ";
        cin >> marks;
        Physics *pobj = new Physics(name, marks, true);
        p[i] = pobj;
        cout << "Enter marks in Chemistry: ";
        cin >> marks;
        Chemistry *cobj = new Chemistry(name, marks, false);
        c[i] = cobj;
        cout << "Enter marks in Mathematics: ";
        cin >> marks;
        Mathematics *mobj = new Mathematics(name, marks, false);
        m[i] = mobj;
    }
    float total, avgstudent = 0, avg;
    for (int i = 0; i < n; i++)
    {
        cout << "Details of student " << i + 1 << ":" << endl;
        cout << "Roll: " << p[i]->getroll() << endl;
        cout << "Name: " << p[i]->getname() << endl;
        total = p[i]->getmarks() + c[i]->getmarks() + m[i]->getmarks();
        cout << "Total marks: " << fixed << setprecision(2) << total << endl;
        avgstudent += total / static_cast<float>(3);
    }
    avg = avgstudent / static_cast<float>(n);
    cout << "Average marks of the class: " << fixed << setprecision(2) << avg << endl;
    for (int i = 0; i < n; i++)
    {
        delete p[i];
        delete c[i];
        delete m[i];
    }
    delete[] p;
    delete[] c;
    delete[] m;
    return 0;
}