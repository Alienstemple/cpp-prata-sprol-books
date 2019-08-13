// upper_register.cpp -- преобразует символы во входной строке в верхний регистр
#include <iostream>
#include <cctype>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;
void upper_register(string & str);
int main()
{
    string input;
    cout << endl << "Enter string ('q' to quit): ";
    getline(cin, input);
    while (input != "q")
    {
        upper_register(input);
        cout << endl << input;
        cout << endl << "Enter string ('q' to quit): ";
        getline(cin, input);
    } 
    cout << endl << "Bye!" << endl;
    return 0;
}
void upper_register(string & str)
{
    int i = 0;
    while (str[i])
    {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        i++;
    }
}