#include <iostream>
#include <cstdlib>
using namespace std;

void execute(string [], int, char);

int main()
{
    string fname[] = {"1_employee", "2_student", "3_rectangle", "4_greatest", "5_circle", "6_calculator", "7_file_count", "8_record", "9_inheritance", "10_fruit", "11_marks", "12_shape", "13_shape_area", "14_person", "15_abstract_class"};
    char mode; int fno;
    cout << "Enter mode (Windows/UNIX) [w/u]: ";
    cin >> mode;
    if (mode != 'u' && mode != 'w')
    {
        cerr << "Invalid mode!" << endl;
        return 1;
    }
    do
    {
        cout << "Enter file number (0 to exit): ";
        cin >> fno;
        if (fno)
            execute(fname, fno - 1, mode);
    } while (fno);
    return 0;
}

void execute(string fname[], int fno, char mode)
{
    if (mode == 'u')
    {
        string compile = "g++ " + fname[fno] + ".cpp -o " + fname[fno];
        system(compile.c_str());
        string exec = "./" + fname[fno];
        system(exec.c_str());
    }
    else if (mode == 'w')
    {
        string compile = "g++ " + fname[fno] + ".cpp -o " + fname[fno] + ".exe";
        system(compile.c_str());
        string exec = fname[fno] + ".exe";
        system(exec.c_str());
    }
}