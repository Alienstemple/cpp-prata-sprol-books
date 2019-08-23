// show_str.cpp -- ф-я выводит строку или выводит строку столько раз, сколько была до этого вызвана
#include <iostream>
using std::cout;
using std::endl;

void show (const char * str, int num = 0);
int main()
{
    char string[10];
    for (int i = 0; i < 10; i++)
        string[i] = 'r';
    string[10] = '\0';
    show(string);
    show(string);
    show(string);
    show(string);
    show(string, 1);
    return 0;
}
void show (const char * str, int num)
{
    static int calls = 0;              // static внутреннее связыв - сохран знач от вызова к вызову
    cout << endl;
    int iter;
    if (!num)            // num = 0
        iter = num;
    else 
        iter = calls;
    while (iter -- >= 0)
    {
        int i(0);
        while (str[i] != '\0')
        {
            cout << str[i];
            i++;
        }
        cout << " ";
    }
    calls++;
    cout << endl << calls;
}