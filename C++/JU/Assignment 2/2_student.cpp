#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

class Student
{
    int roll;
    string name;
    float marks1, marks2, marks3;
    public:
        void getdata();
        void putdata() const;
};

void Student :: getdata()
{
    cout << "Enter roll number: ";
    cin >> roll;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter name of student: ";
    getline(cin, name);
    do
    {
        cout << "Enter marks of 3 subjects of " << name << ": ";
        cin >> marks1 >> marks2 >> marks3;
    } while ((marks1 < 0 || marks1 > 100) || (marks2 < 0 || marks2 > 100) || (marks3 < 0 || marks3 > 100));
}

void Student :: putdata() const
{
    cout << "Roll number: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "Marks of 3 subjects: " << marks1 << ", " << marks2 << ", " << marks3 << endl;
    float avg = (marks1 + marks2 + marks3) / (float) 3;
    cout << "Average: " << fixed << setprecision(2) << avg << endl;
    cout << "Grade: " << ((avg > 80) ? 'A' : ((avg > 70) ? 'B' : ((avg > 60) ? 'C' : ((avg > 50) ? 'D' : ((avg > 40) ? 'E' : 'F'))))) << endl;
}

int main()
{
    const int n = 5;
    int roll; string name; float marks1, marks2, marks3;
    Student *arr = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of student " << i + 1 << ":" << endl;
        arr[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Details of student " << i + 1 << ":" << endl;
        arr[i].putdata();
    }
    delete[] arr;
    return 0;
}