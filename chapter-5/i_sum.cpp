// i_sum.cpp -- интерактивно выводит сумму чисел, введенных пользователем

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    using namespace std;
    int num(1), sum(0); 
    do
    {
        cout << endl << "Введите число: ";
        cin >> num;
        sum += num;
        cout  << "В итоге сумма чисел = " << sum << endl 
        << "Давайте повторим! ^-^";
    }
    while (num);
    cout << endl << "Ня, пока! *-*" << endl;
    cin.get();
    return 0;
}
