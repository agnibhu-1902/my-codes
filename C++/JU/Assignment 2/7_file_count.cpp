#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const string fname = "7_data.txt"; char ch; string line; int count = 0;
    ifstream fin(fname);
    if (!fin)
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }
    while (fin.get(ch))
        count++;
    cout << "Details of file " << fname << ":" << endl;
    cout << "Number of characters: " << count << endl;
    fin.clear();
    fin.seekg(0, ios::beg);
    count = 1;
    while (fin.get(ch))
        if (ch == ' ' || ch == '\n')
            count++;
    cout << "Number of words: " << count << endl;
    fin.clear();
    fin.seekg(0, ios::beg);
    count = 0;
    while (getline(fin, line))
        count++;
    cout << "Number of lines: " << count << endl;
    fin.close();
    return 0;
}