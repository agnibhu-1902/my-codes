#include <iostream>
using namespace std;

class Student
{
    public:
        virtual void display() = 0;
        virtual ~Student() {}
};

class Engineering : public Student
{
    string name;
    int roll, marks;
    public:
        Engineering(const string &name, int roll, int marks)
            : name(name), roll(roll), marks(marks)
        {
        }
        void display()
        {
            cout << "Engineering student: " << name << endl << "Roll number: " << roll << endl << "Marks: " << marks << endl;
        }
};

class Medicine : public Student
{
    string name;
    int roll, marks;
    public:
        Medicine(const string &name, int roll, int marks)
            : name(name), roll(roll), marks(marks)
        {
        }
        void display()
        {
            cout << "Medicine student: " << name << endl << "Roll number: " << roll << endl << "Marks: " << marks << endl;
        }
};

class Science : public Student
{
    string name;
    int roll, marks;
    public:
        Science(const string &name, int roll, int marks)
            : name(name), roll(roll), marks(marks)
        {
        }
        void display()
        {
            cout << "Science student: " << name << endl << "Roll number: " << roll << endl << "Marks: " << marks << endl;
        }
};

int main()
{
    const int size = 3;
    Student *students[] = {
        new Engineering("John", 101, 90),
        new Medicine("Alice", 202, 85),
        new Science("Bob", 303, 92)
    };
    for (int i = 0; i < size; i++)
        students[i]->display();
    for (int i = 0; i < size; i++)
        delete students[i];
    return 0;
}