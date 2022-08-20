#include "time.h"

int main(void)
{
    bool flag = true;
    do
    {
        int hr, min, sec;
        cout << "Enter time:" << endl << endl;
        cout << "\tHours: ";
        cin >> hr;
        cout << "\tMinutes: ";
        cin >> min;
        cout << "\tSeconds: ";
        cin >> sec;
        Time time(hr, min, sec);
        unsigned short choice;
        do
        {
            cout << "\n===== MENU =====\n1. Display time\n2. Add ticks\n3. Exit\n\nEnter choice: ";
            cin >> choice;
            switch(choice)
            {
            case 1:
                cout << "\nTime: ";
                time.print();
                cout << endl;
                break;
            case 2:
                int ticks;
                cout << "\nEnter number of ticks: ";
                cin >> ticks;
                for(int i = 1; i <= ticks; i++)
                    time.tick();
                cout << "\nAdded " << ticks << " ticks!" << endl << endl;
                break;
            case 3:
                break;
            default:
                cout << "\nInvalid choice!" << endl << endl;
            }
        } while (choice != 3);
        cout << "\nContinue? [0/1]: ";
        cin >> noboolalpha >> flag;
    } while (flag);
    return 0;
}