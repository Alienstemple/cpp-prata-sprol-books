// books.cpp -- считает годовой объем продаж книг

#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "RUS");
    int books[12], sum=0;
    char *months[] = {"ЯНВ", "ФЕВ", "МАР", "АПР", "МАЙ", "ИЮН", "ИЮЛ", "АВГ", "СЕН", "ОКТ", "НОЯ", "ДЕК", NULL};

    cout << endl << "Введите объем продаж по месяцам" << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << endl << months[i] << ": ";
        cin >> books[i];
        sum += books[i];
    }
    cout << endl << "Суммарный объем продаж за год: " << sum << endl;
    cin.get();
    return 0;
}
