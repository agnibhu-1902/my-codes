#include <iostream>
using namespace std;
class Pattern
{
    private:
        int height;
    public:
        Pattern(int);
        void print();
};
Pattern :: Pattern(int h)
    : height(h)
{
}
void Pattern :: print()
{
    for (int i = height - 1; i >= 0; i--)
    {
        for (int j = 0; j < height - i; j++)
            cout << " ";
        for (int j = 2 * i + 1; j >= 1; j--)
            cout << "*";
        cout << endl;
    }
}
int main()
{
    int height;
    cout << "Enter height: ";
    cin >> height;
    Pattern pattern(height);
    pattern.print();
    return 0;
}