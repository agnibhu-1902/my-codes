#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(void)
{
    const int CAPACITY = 10;
    int frequencies[CAPACITY] = {0};
    ifstream integerFile;
    integerFile.open("integer_file.txt");
    if(!integerFile)
    {
        cout << "Error! File cannot be opened.\nTerminating..." << endl;
        return 1;
    }
    int data, count = 0;
    while (integerFile >> data)
    {
        if (data >= 0 && data <= 9)
        {
            count++;
            frequencies[data]++;
        }
    }
    integerFile.close();
    cout << "There are " << count << " valid data items." << endl << endl;
    cout << "Frequency Histogram:" << endl << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << setw(3) << left << i;
        for(int j = 1; j <= frequencies[i]; j++)
            cout << '*';
        cout << setw(3) << right << frequencies[i] << endl;
    }
    return 0;
}