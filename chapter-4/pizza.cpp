// pizza.cpp -- запрашивает и выводит поля структуры
#include <iostream>
#include <string>
using namespace std;
struct Pizza
{
    string company;
    float diameter;
    float weight;
} pizza;

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << endl << "Введите название компании: ";
    getline(cin, pizza.company);
    cout << endl << "Введите диаметр пиццы: ";
    cin >> pizza.diameter;
    cout << endl << "Введите массу пиццы: ";
    cin >> pizza.weight;

    cout << endl << "Введенные данные о пицце: " << pizza.company << ", " << pizza.diameter 
    << " см, " << pizza.weight << " г." << endl;
    cin.get();
    return 0;
}
