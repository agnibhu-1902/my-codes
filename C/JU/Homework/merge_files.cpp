#include <iostream>
#include <fstream>
using namespace std;
void operator+(ifstream &, ifstream &);
int main()
{
    ifstream fin1("file1.txt"), fin2("file2.txt");
    if (!fin1 || !fin2)
    {
        cerr << "Cannot open file" << endl;
        return 1;
    }
    fin1 + fin2;
    fin1.close(); fin2.close();
    return 0;
}
void operator+(ifstream &fin1, ifstream &fin2)
{
    ofstream fout("file_merged.txt");
    if (!fout)
    {
        cerr << "Cannot open file" << endl;
        exit(1);
    }
    char ch;
    while (fin1.get(ch))
        fout.put(ch);
    while (fin2.get(ch))
        fout.put(ch);
}