// little_robot.cpp -- выводит на экран графику ASCII
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    char a = 32; // пробел
    char b = 95; // _
    char c = 92; // обратный слеш
    char d = 47; // /
    char e = 94; // ^
    char f = 40; // (
    char g = 41; // )
    char h = 124; // |
    char j = 248; // o

    cout << endl;
    cout << "Привет! Я - маленький робот!";
    cout << endl;
    cout << a << a << a << a << a << a << a << a << d << c << a << a << a << a << a << a << a << a << endl;
    cout << a << a << a << a << a << a << a << h << a << a << h << a << a << a << a << a << a << a << endl;
    cout << a << a << a << a << a << a << d << a << e << e << a << c << a << a << a << a << a << a << endl;
    cout << a << a << a << a << a << h << a << f << g << f << g << a << h << a << a << a << a << a << endl;
    cout << a << a << b << a << a << h << a << a << b << b << a << a << h << a << a << b << a << a << endl;
    cout << a << a << c << c << a << a << c << a << c << d << a << d << a << a << d << d << a << a << endl;
    cout << a << a << a << c << c << a << a << c << a << a << d << a << a << d << d << a << a << a << endl;
    cout << a << a << a << a << c << c << b << d << a << a << c << b << d << d << a << a << a << a << endl;
    cout << a << a << a << a << a << c << a << a << a << a << a << a << d << a << a << a << a << a << endl;
    cout << a << a << a << a << a << h << "o" << "o" << "o" << "o" << "o" << "o" << h << a << a << a << a << a << endl;
    cout << a << a << a << a << a << h << a << a << b << b << a << a << h << a << a << a << a << a << endl;
    cout << a << a << a << a << a << h << a << h << a << a << h << a << h << a << a << a << a << a << endl;
    cout << a << a << a << a << a << h << a << h << b << b << h << a << h << a << a << a << a << a << endl;
    cout << a << a << a << a << a << h << a << a << a << a << a << a << h << endl << endl;
    cin.get();
    return 0;
}
