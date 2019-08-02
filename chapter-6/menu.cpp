// menu.cpp -- вывод меню и действие с помощью case
#include <iostream>
using namespace std;
void menu(void);
int main()
{
    setlocale(LC_ALL, "RUS");
    char ch;
    menu();
    while (cin.get(ch))
    {
    
    switch(ch)
    {
        case 'a':
            cout << endl << "This is alpha \n"; break;
        case 'b':
            cout << endl << "This is beta \n"; break;
        case 'g':
            cout << endl << "This is gamma \n"; break;
        case 'd':
            cout << endl << "This is delta \n"; break;
        default: 
            cout << endl << "Wrong letter! Try again: \n";
            menu();
            continue;
    }
    break;
    }
    cin.get();
    return 0;
}

void menu(void)
{
    cout << endl << "Enter one of these letters: " << endl
    << "a) alpha \nb) beta \ng) gamma \nd) delta \n";
}
