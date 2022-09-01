#include<iostream>
#include<string>
#include<fstream>
#include<cassert>
using namespace std;

void reverse(string&);
bool isPalindrome(string&);

int main(void)
{
    string strg("Hello my friends");
    cout << "Size: " << strg.size() << endl;
    cout << "Maximum size: " << strg.max_size() << endl;
    cout << "Capacity: " << strg.capacity() << endl;
    cout << "Empty: " << boolalpha << strg.empty() << endl << endl;
    
    // Making conversion
    strg.reserve(20);
    cout << "Size: " << strg.size() << endl;
    cout << "Maximum size: " << strg.max_size() << endl;
    cout << "Capacity: " << strg.capacity() << endl;
    cout << "Empty: " << boolalpha << strg.empty() << endl << endl;
    cout << "Character at position 6: " << strg.at(6) << endl;
    for(int i=0; i < strg.size(); i++)
        strg[i] = toupper(strg[i]);
    cout << "Uppercase: " << strg << endl;
    reverse(strg);
    cout << "Reversed string: " << strg << endl << endl;
   
    strg = "The C++ Language is fun to work with";
    cout << strg.substr(8) << endl;
    cout << strg.substr(4, 12) << endl << endl;


    strg.push_back(' ');
    strg.erase(7, 9);
    cout << "Erased string: " << strg << endl;
    strg.clear();
    cout << "Cleared string: " << strg << endl << endl;

    //Convert file to right justified format
    ifstream inputFile;
    ofstream outputFile;
    string line;
    inputFile.open("infile.dat");
    assert(inputFile);
    int maxSize = 0;
    while(!inputFile.eof())
    {
        getline(inputFile, line);
        if(line.size() > maxSize)
            maxSize = line.size();
    }
    inputFile.close();
    inputFile.open("infile.dat");
    assert(inputFile);
    outputFile.open("outfile.dat");
    assert(outputFile);
    while(!inputFile.eof())
    {
        getline(inputFile, line);
        string temp(maxSize - line.size(), ' ');
        line.insert(0, temp);
        line.append("\n");
        outputFile << line;
    }
    inputFile.close();
    outputFile.close();

    strg = "Hello world";
    const char* arr = strg.data (); // Conversion to a character array
    const char* str1 = strg.c_str (); // Conversion to a C string
    cout << arr << endl;
    cout << str1 << endl << endl;

    // Declaration of two C++ strings
    string strg1 ("Hello my friends");
    string strg2 ("Hello friends");
    // Comparing two C++ strings
    cout << strg1 << " compared with " << strg2 << ": ";
    cout << strg1.compare (strg2) << endl;
    // Comparing part of the two C++ strings
    cout << "Hello compared with Hello: ";
    cout << strg1.compare( 0, 5, strg2, 0, 5) << endl;
    // Comparing part of the first C++ string and a C-string
    cout << "Hello compared with Hello friends: ";
    cout << strg1.compare (0, 5, strg2) << endl;
    // Comparing part of a C++ string and part of a C-string
    cout << "Hel compared with Hell: ";
    cout << strg2.compare (0, 3, "Hello" ,4) << endl << endl;

    string strg5;
    string strg6 (5, 'a');
    string strg3 ("Hello Friends");
    string strg4 ("Hi People", 4);
    // Using six logical operators (relational and equality)
    cout << "strg5 < strg6 : " << boolalpha << (strg5 < strg6);
    cout << endl;
    cout << "strg6 >= strg3: " << boolalpha << (strg6 >= strg3);
    cout << endl;
    cout << "strg5 == strg6: " << boolalpha << (strg5 == strg6);
    cout << endl;
    cout << "Hi P != strg4: " << boolalpha << ("Hi P" != strg4) << endl << endl;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    if(isPalindrome(s))
        cout << s << " is palindrome" << endl << endl;
    else
        cout << s << " is not palindrome" << endl << endl;

    // Declarations
    string first, last;
    char init;
    // Input first, last, and initial
    cout << "Enter first name: ";
    cin >> first;
    cout << "Enter last name: ";
    cin >> last;
    cout << "Enter initial: ";
    cin >> init;
    // Printing the full name in one format
    cout << endl;
    cout << "Full name in first format: ";
    cout << first + " " + init + "." + " " + last << endl << endl;
    // Printing the full name in another format
    cout << "Full name in second format: ";
    cout << last + ", " + first + " " + init + "." << endl << endl;
    fflush(stdin);

    string text, word;
    string delimiter(" ");
    string::size_type wStart, wEnd;
    string::size_type npos;
    cout << "Enter a line of text: ";
    getline(cin, text);
    cout << "Words in the text: " << endl;
    wStart = text.find_first_not_of(delimiter, 0);
    while(wStart<npos)
    {
        wEnd=text.find_first_of(delimiter, wStart);
        cout << text.substr(wStart, wEnd - wStart) << endl;
        wStart=text.find_first_not_of(delimiter, wEnd);
    }

    cout << "Enter a string of characters: ";
    getline(cin, strg);
    cout << "Output: " << strg << endl;
    cout << "Enter a string of characters ending with $ sign: ";
    getline(cin, strg, '$');
    cout << "Output: " << strg << endl;
    return 0;
}

void reverse(string& strg)
{
    string tmp(strg);
    for(int i = 0; i < strg.size(); i++)
        strg[i] = tmp[tmp.size() - i - 1];
}

bool isPalindrome(string &str)
{
    string tmp(str);
    reverse(tmp);
    return tmp == str;
}