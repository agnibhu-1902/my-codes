#include <iostream>
using namespace std;

class Person
{
    string name;
    public:
        Person(const string &name)
            : name(name)
        {
        }
        virtual void display() const
        {
            cout << "Person: " << name << endl;
        }
        virtual ~Person()
        {
            cout << "Destructor of Person called" << endl;
        }
};

class Employee : virtual public Person
{
    long employeeid;
    public:
        Employee(const string &name, long eid)
            : Person(name), employeeid(eid)
        {
        }
        void display() const
        {
            cout << "Employee ID: " << employeeid << endl;
        }
        ~Employee()
        {
            cout << "Destructor of Employee called" << endl;
        }
};

class Student : virtual public Person
{
    long studentid;
    public:
        Student(const string &name, long sid)
            : Person(name), studentid(sid)
        {
        }
        void display() const
        {
            cout << "Student ID: " << studentid << endl;
        }
        ~Student()
        {
            cout << "Destructor of Student called" << endl;
        }
};

class Manager : public Employee, public Student
{
    string department;
    public:
        Manager(const string &name, long eid, long sid, string dept)
            : Person(name), Employee(name, eid), Student(name, sid), department(dept)
        {
        }
        void display() const
        {
            Person::display();
            Employee::display();
            Student::display();
            cout << "Department: " << department << endl;
        }
        ~Manager()
        {
            cout << "Destructor of Manager called" << endl;
        }
};

int main()
{
    Manager manager("John Doe", 101, 202, "Engineering");
    manager.display();
    return 0;
}