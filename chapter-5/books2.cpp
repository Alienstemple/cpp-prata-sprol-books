// books.cpp -- считает годовой объем продаж книг

#include <iostream>

int main()
{
using namespace std;
setlocale(LC_ALL, "RUS");
int books[12][3], sum1 = 0, sum2 = 0;
char *months[] = {"ЯНВ", "ФЕВ", "МАР", "АПР", "МАЙ", "ИЮН", "ИЮЛ", "АВГ", "СЕН", "ОКТ", "НОЯ", "ДЕК", NULL};

cout << endl << "Введите объем продаж по месяцам" << endl;
for (int j=0; j<3; j++)
{
    sum1 = 0;
    cout << "За " << j+1 << "-й год" << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << endl << months[i] << ": ";
        cin >> books[i][j];
        sum1 += books[i][j];
    }
    cout << endl << "Суммарный объем продаж за " << j+1 << "-й год: " << sum1 << endl;
    sum2 += sum1;
}
cout << endl << "Суммарный объем продаж за 3 года: " << sum2 << endl;
cin.get();
return 0;
}
