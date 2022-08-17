#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    short first = 5, last = 15, tryLimit = 5;
    srand(time(0));
    int temp = rand();
    int num = temp % (last - first + 1) + first;
    int counter = 1, guess; bool found = false;
    while(counter <= tryLimit && !found)
    {
        do
        {
            /* code */
            cout << "Enter a number (5-15): ";
            cin >> guess;
        } while (guess < 5 || guess > 15);
        if(guess == num)
            found = true;
        else if(guess > num)
            cout << "Your guess was too high!" << endl;
        else
            cout << "Your guess was too low!" << endl;
        counter++;
    }
    if(found)
        cout << "Congratulations! You found it!\nThe number was " << num << "." << endl;
    else
        cout << "Sorry, you did not find it.\nThe number was " << num << "." << endl;
    return 0;
}