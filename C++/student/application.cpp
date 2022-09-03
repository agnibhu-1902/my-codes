#include "student.h"

int main(void)
{
    int ch;
    do
    {
        cout << "===== MENU =====\n1. Person infofrmation\n2. Student information\n3. Exit\n\nEnter choice: ";
        cin >> ch;
        long id; double gp;
        switch (ch)
        {
        case 1:
            cout << "Enter ID: ";
            cin >> id;
            {
                Person person(id);
                cout << "\nInformation about person:" << endl;
                person.print();
                cout << endl;
            }
            break;
        case 2:
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter GPA: ";
            cin >> gp;
            {
                Student student(id, gp);
                cout << "\nInformation about student:" << endl;
                student.print();
                cout << endl;
            }
            break;
        case 3:
            cout << "\nTerminating..." << endl;
            break;
        default:
            cout << "\nInvalid choice!" << endl << endl;
        }
    } while(ch != 3);
    return 0;
}