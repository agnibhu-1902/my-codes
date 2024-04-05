#include <iostream>
using namespace std;
class String
{
    string str;
    public:
        String(string);
        String();
        void display();
        String join(String, String);
};
String :: String(string input)
    : str(input)
{
}
String :: String()
    : str("")
{
}
void String :: display()
{
    cout << str << endl;
}
String String :: join(String obj1, String obj2)
{
    String joinobj;
    joinobj.str = this->str + obj1.str + obj2.str;
    return joinobj;
}
int main()
{
    string str1, str2, str3;
    cout << "Enter 3 strings:" << endl;
    getline(cin, str1);
    getline(cin, str2);
    getline(cin, str3);
    String obj1(str1), obj2(str2), obj3(str3);
    cout << "The entered strings are:" << endl;
    obj1.display(); obj2.display(); obj3.display();
    String joinobj = obj1.join(obj2, obj3);
    cout << "Joined string: ";
    joinobj.display();
    return 0;
}