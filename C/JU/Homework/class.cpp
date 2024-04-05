#include <iostream>
using namespace std;
class College
{
    string departnemt, course, *students;
    public:
        College(string d, string c, string* s)
            : departnemt(d), course(c), students(s)
        {
        }
};