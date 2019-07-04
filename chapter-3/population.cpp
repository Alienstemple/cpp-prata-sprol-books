//population.cpp - считает процент жителей страны от жителей всего мира
#include <iostream>
using namespace std;
int main ()
{
    setlocale(LC_ALL, "RUS");
    long long world_popul;
    long long country_popul;
    cout << endl << "Введите число людей в мире: ";
    cin >> world_popul;
    cout << endl << "Введите число людей в вашей стране: ";
    cin >> country_popul;

    double percent = (double(country_popul)*100)/double(world_popul);
    cout << endl << "Население вашей страны составляет " << percent << "% от населения мира. " << endl;
    cin.get();
    return 0;
}
