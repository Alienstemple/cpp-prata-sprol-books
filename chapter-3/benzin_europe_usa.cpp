//benzin_europe_usa.cpp - переводит расход бензина из л/100 км в мили/галлон
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    const float m_per_100km = 62.14;
    const float l_per_gal = 3.875;
    int europe;
    cout << endl << "Введите расход бензина в л/100 км: " << endl;
    cin >> europe;

    float usa = m_per_100km / float (europe) * l_per_gal;
    cout << endl << "Расход в милях на галлон: " << usa << endl;
    cin.get();
    return 0;
}
