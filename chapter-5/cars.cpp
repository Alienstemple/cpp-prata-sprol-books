// cars.cpp -- создает динамический массив структур, описывающих машины, и выводит данные

#include <iostream>
#include <string>

using namespace std;

struct car
{
    string name;
    int year;
};

int main()
{
    setlocale(LC_ALL, "RUS");
    int n;
    cout << endl << "Сколько автомобилей вы хотите занести в каталог? ";
    cin >> n;
    cin.get();
    car* catalog = new car[n];
    for (int i = 0; i < n; ++i)
    {
        cout << endl << "Авто №" << i+1 << ":" 
        << endl << "Введите производителя: ";
        std::getline(cin, (*(catalog+i)).name);
        cout << "Введите год выпуска: ";
        cin >> (*(catalog+i)).year;
        cin.get();
    }
    cout << endl << "Вот ваша коллекция:";
    for (int i = 0; i < n; ++i)
        cout << endl << (*(catalog+i)).year << "\t" << (*(catalog+i)).name;
    cout << endl;
    delete [] catalog;
    cin.get();
    return 0;
}
