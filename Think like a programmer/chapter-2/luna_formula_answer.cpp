// luna_formula_answer.cpp -- валидность ID по формуле Луна, нахождение контрольного числа 
//(сложение и умножение на 2, сравнение с контрольным числом)
#include <iostream>

using namespace std;
int double_num(int num);    //вспомогательная ф-я умножения на 2 и сложения цифр по отдельности
int main()
{
    int total1=0;
    char ch;
    int number;
    int position = 1;
    cout << endl << "Enter your ID: ";
    while (((ch = cin.get()) != '\n') && position < 12)     //заполнение вектора числами до перехода на новую строку или ввода всего номера
    {
        number = ch - '0';
        if (position % 2 == 0)
        {
            total1 += double_num(number);
        }
        else
        {
            total1 += number;
        }
        position++;
    }
int control_sum;
if (total1 % 10 == 0)// генерация конрольного числа
{
	control_sum = 0;
    cout << endl << total1 << endl;
}
else if (total1 > 99)
{
	control_sum = ((total1 / 100) + 1) * 10 - total1;
    cout << endl << ((total1 / 100) + 1) * 10 << endl;
}
else if (total1 > 9)
{
	control_sum = ((total1 / 10) + 1) * 10 - total1;
    cout << endl << ((total1 / 10) + 1) * 10 << endl;
}
else
{
	control_sum = 10 - total1;
    cout << endl << 10 << endl;
}
cout << endl << control_sum << endl;
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
