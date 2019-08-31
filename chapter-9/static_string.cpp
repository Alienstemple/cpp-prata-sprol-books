// static_string.cpp -- статическая перем внутр связывание
#include <iostream>
#include <cstring>
#include <string>

// function prototype
void strcount(std::string str);

int main()
{
    using namespace std;
    string input;
    char next;

    cout << "Enter a line:\n";
    (cin >> input).get();
    while (input.length())    // ??? выход по нулевой строке   ???
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        (cin >> input).get();
    }
    cout << "Bye\n";
// code to keep window open for MSVC++
/*
cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0;
}

void strcount(std::string str)
{
    using namespace std;
    static int total = 0;        // static local variable
    int count = 0;               // automatic local variable

    cout << "\"" << str <<"\" contains ";
    int i = 0;
    while (str[i++])               // go to end of string
        count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
