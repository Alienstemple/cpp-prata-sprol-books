// depozit.cpp -- считает доход от депозита в 5% годовых
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    double sum;
    int months;
    cout << endl << "Введите сумму вашего депозита: ";
    cin >> sum;
    cout << endl << "Введите количество месяцев: ";
    cin >> months; 
    cout << endl;

    double earning_general = sum * months * 5 / 100;
    double earning_month = earning_general / 12;
    sum += earning_general;
    cout << "Общая прибыль: " << earning_general << endl;
    cout << "Прибыль в месяц: " << earning_month << endl;
    cout << "Выплата в конце: " << sum << endl;
    cin.get();
    return 0;
}
