//body_mass_index.cpp - вычисляет индекс массы тела по росту в футах и дюймах и весу в фунтах
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    const int i_per_foot = 12;
    const float i_per_meter = 0.0254;
    const float k_per_pound = 2.2;

    int foot, inch, pound;
    cout << "Введите свой рост в формате футов и дюймов: \n футы: _"; 
    cin >> foot;
    cout << "\nдюймы: _"; 
    cin >> inch;
    cout << "\nВведите свой вес в фунтах: _"; 
    cin >> pound;
    
    inch += foot * i_per_foot;
    float meter = inch * i_per_meter;
    float kilo = pound / k_per_pound;
    cout << "\nВаш индекс массы тела: " << kilo / pow(meter, 2) << endl; 
    cin.get();
    return 0;
}
