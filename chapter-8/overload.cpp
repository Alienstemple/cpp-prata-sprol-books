// overload.cpp -- пример перерузки ф-й
#include <iostream>
#include <cstring>
using namespace std;
struct stringy {
    char * str;
    int ct;
};
void set(stringy &, const char *);
void show(const stringy &, int times = 1);
void show(const char *, int times = 1);
int main()
{
    stringy beany;
    char testing[] = "Wake up, Neo. The Matrix has you.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}
void set(stringy & alert, const char * str)
{
    alert.ct = strlen(str);
    alert.str = new char[alert.ct];
    strncpy(alert.str, str, alert.ct);
}
void show(const stringy & alert, int times)
{
    while (times-- > 0)
    {
        cout << endl << alert.str;
    }
}
void show(const char * str, int times)
{
    while (times-- > 0)
    {
        cout << endl << str;
    }
}