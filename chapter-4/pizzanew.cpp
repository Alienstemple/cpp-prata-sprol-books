// pizzanew.cpp -- работает со структурой в динамической памяти

#include <iostream>
#include <string>
 using namespace std;
 struct Pizza
 {
     string company;
     float diameter;
     float weight;
 };
 
 int main()
 {
     setlocale(LC_ALL, "RUS");
     Pizza* pizza = new Pizza;  
     cout << endl << "Введите диаметр пиццы: ";
     (cin >> pizza->diameter).get();
     cout << endl << "Введите название компании: ";
     getline(cin, pizza->company);
     cout << endl << "Введите массу пиццы: ";
     cin >> pizza->weight;
 
     cout << endl << "Введенные данные о пицце: " << pizza->company << ", " << pizza->diameter
     << " см, " << pizza->weight << " г." << endl;
     delete pizza;
     cin.get();
     return 0;
 }

