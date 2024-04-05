#include <iostream>
#include <limits>
using namespace std;

class Employee
{
    long emp_id;
    string name;
    float salary;
    public:
        void getdata();
        void putdata() const;
        bool checksalary(float) const;
};

void Employee :: getdata()
{
    cout << "Employee id: ";
    cin >> emp_id;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Name: ";
    getline(cin, name);
    do
    {
        cout << "Salary: ";
        cin >> salary;
    } while (salary < 0);
}

void Employee :: putdata() const
{
    cout << "Employee ID: " << emp_id << endl;
    cout << "Name: " << name << endl;
}

bool Employee :: checksalary(float sal) const
{
    return salary > sal;
}

int main()
{
    const int check_salary = 5000; int n;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee *arr = new Employee[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter details of employee " << i + 1 << ":" << endl;
        arr[i].getdata();
    }
    cout << "Details of employees with salary above " << check_salary << ":" << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].checksalary(check_salary))
        {
            cout << "Details of employee " << i + 1 << ":" << endl;
            arr[i].putdata();
        }
    }
    delete[] arr;
    return 0;
}