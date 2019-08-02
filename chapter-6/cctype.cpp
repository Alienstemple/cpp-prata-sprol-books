// cctype.cpp -- ввод символов и изменение case
#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    cout << endl << "Enter non-digit symbols, to stop output enter @: ";
    char ch;
    while ((ch = cin.get()) != '@')
    {
        if (!isdigit(ch)) {
            if (islower(ch)) {
                cout.put(toupper(ch));
            }
            else {
                 cout.put(tolower(ch));
            }
        }
    }
    cin.get();
    return 0;
}
