// if_else.cpp -- считает налог для диапазона денежных сумм
#include <iostream>

int main()
{
    using std::endl;
    using std::cout;
    using std::cin;
    setlocale(LC_ALL, "RUS");

    long money, tax;
    cout << endl << "Введите сумму: ";
    cin >> money;

    if (money <= 5000)
        tax = 0;
    else if (money <= 15000)
        tax = 0.10 * (money - 5000);
    else if (money <= 35000)
        tax = 0.10 * 10000 + 0.15 * (money - 15000);
    else
        tax = 0.10 * 10000 + 0.15 * 20000 + 0.20 * (money - 35000);

    cout << endl << "Налог = " << tax << endl;
    cin.get();
    return 0;
}
