// luna_formula.cpp -- мой вариант программы проверки валидность ID по формуле Луна 
//(сложение и умножение на 2, сравнение с контрольным числом)
#include <iostream>

using namespace std;
int double_num(int num);    //вспомогательная ф-я умножения на 2 и сложения цифр по отдельности
int main()
{
    int total1=0, total2=0;
    char ch;
    int number;
    int position = 1;
    cout << endl << "Enter your ID: ";
    while ((ch = cin.get()) != '\n')     //заполнение вектора числами до перехода на новую строку
    {
        number = ch - '0';
        if (position % 2 == 0)
        {
            total1 += double_num(number);
            total2 += number;
        }
        else
        {
            total1 += number;
            total2 += double_num(number);
        }
        position++;
    }

    if (position % 2 == 1)                            //если кол-во цифр в числе нечетно
    {
        cout << endl << "checksum is " << total2;
        if (total2 % 10 == 0)
            cout << endl << "Congratulations! Your ID is valid!" << endl;
        else
            cout << endl << "Your ID is invalid! Go away from here!" << endl;
    }
    else                                           //если кол-во цифр в числе четно
    {
        cout << endl << "checksum is " << total1;
        if (total1 % 10 == 0)
            cout << endl << "Congratulations! Your ID is valid!" << endl;
        else
            cout << endl << "Your ID is invalid! Go away from here!" << endl;
    }
    cin.get();
    return 0;
}

int double_num(int num)
{
    if (num < 5)
        return num * 2;
    else
        return ((num * 2) % 10 + 1);
}
