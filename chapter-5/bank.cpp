// bank.cpp -- считает прибыль по вкладам

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    using namespace std;
    double Daf_bal(100), Kle_bal(100), Kle_earn;
    int years = 1;

    cout << endl << "Таблица вкладов Дафны и Клео" << endl;
    cout << "год\t\tДафна\t\tКлео\n" 
    << "1\t\t100\t\t100\n";

    while (Kle_bal <= Daf_bal)
    {
        Daf_bal += 10;

        Kle_earn = 0.05 * Kle_bal;
        Kle_bal += Kle_earn;

        years++;
        cout << years << "\t\t" << Daf_bal << "\t\t" << Kle_bal << endl;
    }
    cin.get();
    return 0;
}
