//d_per_foot.cpp - преобразует футы в дюймы и футы
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    const int d_per_foot = 12;
    int length;
    cout << "Введите длину в дюймах: _";
    cin >> length;
    cout << "\b\n" << "Длина = " << length/d_per_foot << " футов " << length%d_per_foot << " дюймов. \n";
    cin.get();
    return 0;
}
