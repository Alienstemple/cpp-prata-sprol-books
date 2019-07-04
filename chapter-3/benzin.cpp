//benzin.cpp - вычисляет объем израсходованного бензина на 100 км
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int liter, kilometer;
    cout << endl << "Введите объем израсходованного топлива в литрах: ";
    cin >> liter;
    cout << endl << "Введите пройденное расстояние в километрах: ";
    cin >> kilometer;

    float l_per_100km = float (liter)*100/float (kilometer);
    cout << endl << "Расход топлива на 100 км: " << l_per_100km << endl;
    cin.get();
    return 0;
}
