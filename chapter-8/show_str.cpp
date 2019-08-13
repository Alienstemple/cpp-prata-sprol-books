// show_str.cpp -- ф-я выводит строку или выводит строку столько раз, сколько была до этого вызвана
#include <iostream>
using std::cout;
using std::endl;

int & show (const char * str, int * num = 0);
int main()
{
    char string[10];
    for (int i = 0; i < 10; i++)
        string[i] = 'r';
    string[10] = '\0';
    int times = 0;
    show(string, &times);
    show(string);
    show(string);
    int final;
    final = show(string);
    int * ptr = &final;
    show(string, ptr);
    return 0;
}
int & show (const char * str, int * num)
{
    cout << endl;
    int iter;
    if (*num != 0)
        iter = *num;
    else 
        iter = 0;
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
    *num++;
    cout << endl << *num;
    return *num;
}