#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
    char *str;
    cout << "Enter a valid date (Eg. September 15, 2005): ";
    cin.getline(str, 20);
    char *p = strtok(str, ", ");
    cout << "The entered date is: " << endl;
    while(p)
    {
        cout << p << endl;
        p = strtok(0, ", ");
    }
    return 0;
}