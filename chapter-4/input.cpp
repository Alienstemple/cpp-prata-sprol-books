// input.cpp -- запрашивает и выводит личные данные
#include <iostream>
#include <stdio.h>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "RUS");

    char name[10], lname[10], grade;
    int age;

    cout << endl << "Введите имя и фамилию: ";
    cin.getline(name, 10);
    cout << endl << "Введите отчество: ";
    cin.getline(lname, 10);
    cout << endl << "Какой класс вы заканчиваете? ";
    (cin.get(grade)).get();
    cout << endl << "Сколько вам лет? ";
    cin >> age;
    cout << endl;

    cout << "Имя: " << lname << ", " << name << endl;
    cout << "Следующий класс: ";
    cout.put(grade+1);
    cout << endl;
    cout << "Возраст: " << age << endl;
    cin.get();
    return 0;
}
