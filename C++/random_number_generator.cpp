#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class RandomInteger
{
private:
    int low;
    int high;
    int value;

public:
    RandomInteger(int, int);
    ~RandomInteger();
    RandomInteger(const RandomInteger &) = delete;
    void print(void) const;
};

RandomInteger ::RandomInteger(int start, int end)
    : low(start), high(end)
{
    srand(time(0));
    int temp = rand();
    value = temp % (high - low + 1) + low;
}
RandomInteger ::~RandomInteger()
{
}
void RandomInteger ::print() const
{
    cout << "Generated random number: " << value << endl;
}

int main(void)
{
    bool choice = true;
    int start, end;
    do
    {
        /* code */
        cout << "Enter starting range: ";
        cin >> start;
        cout << "Enter ending range: ";
        cin >> end;
        RandomInteger rnd(start, end);
        rnd.print();
        cout << "Continue? [0/1]: ";
        cin >> noboolalpha >> choice;
    } while (choice == true);
    return 0;
}