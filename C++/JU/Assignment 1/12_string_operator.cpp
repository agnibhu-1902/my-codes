#include <iostream>
#include <string>
using namespace std;
class String
{
    string str;
    public:
        String(string s)
            : str(s)
        {
        }
        String()
            : str("")
        {
        }
        string print()
        {
            return str;   
        }
        String operator+(String const &obj)
        {
            String res;
            res.str = str.append(obj.str);
            reverse(res.str.begin(), res.str.end());
            return res;
        }
};
int main()
{
    string str1, str2;
    cout << "Enter 2 strings: ";
    cin >> str1 >> str2;
    String obj1(str1), obj2(str2), obj;
    obj = obj1 + obj2;
    cout << "Resultant string: " << obj.print() << endl;
    return 0;
}