// bin_to_dec_func.cpp -- отдельное тестирование функции по переводу из 2-ичной с-мы в 10-чную
#include <iostream>
#include <cmath>
using namespace std;
void bin_to_dec (int num[], int size);  // передаем ф-и массив - 2-ичн число
int main()
{
    int bin[100];
    int binsize = 0;
    char input;
    cout << endl << "Enter binary number: ";
    while (((input = cin.get()) != '\n') && (binsize < 100))
    {
       /* if (((input - '0') != 1) || ((input - '0') != 0) || (input != '\n')) // проверка на правильность вводимого
        {
            cout << endl << "Wrong number! Try again!";
            continue;
        }  */
        bin[binsize] = input - '0';
        binsize++;
    }
    cout << "mas size: " << binsize;

    bin_to_dec(bin, binsize); // передача функции перевода в 10-чную с-му
    cin.get();
    return 0;
}
void bin_to_dec (int num[], int size)
{
    int out = 0;
    int i, count;
    for (i = size - 1, count = 0; i >= 0, count < size; i--, count++)  // идем по массиву задом наперед
        out += num[i] * pow(2, count);           // 0*2^0 + 1*2^1 + 1*2^2 и т.д. поразрядно
    cout << endl << "Decimal number: " << out;     // вывод 10-чного числа
}
