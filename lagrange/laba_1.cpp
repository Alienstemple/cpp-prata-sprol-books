#include <iostream>
#include <iomanip>
#include "lagr_polynom.h"
using namespace LAGRANGE;
int main(int argc, char * argv[])
{
    setlocale(LC_ALL, "RUS");
    unit u;
    set_units(u);
    std::cout << std::endl << "Точки интерполирования и значения функции в них (шаг = 0.5):\n";
    for (int i = 0; i < POINTS_1; i++)
        std::cout << std::setw(5) << u.x_points[i] << "\t"
        << std::setw(5) << std::setprecision(2) << u.f_points[i] << "\n";
    std::cout << std::endl;
    point p;
    set_points(p);
    std::cout << std::endl;
    Lagr_Polynom Polynom1(1, u, p);              // создали объекты класса, конструктор автоматически
    Lagr_Polynom Polynom3(3, u, p);              // вычислил полином в виде массива
    Lagr_Polynom Polynom6(6, u, p);

    // вывод результатов в виде таблицы
    std::cout << std::endl << "Итоговая таблица точек, значений функции в них и полиномов 1, 3 и 6 порядка (шаг = 0.12):\n";
    std::cout << std::endl << std::setw(5) << "x\t" << std::setw(5) << "f(x)\t"
    << std::setw(8) << "L1(x)\t\t" << std::setw(8) << "L2(x)\t\t" << std::setw(8) << "L3(x)\n";
    for (int i = 0; i < POINTS_2; i++)
        std::cout << std::setw(5) << p.x_points[i] << "\t"
        << std::setw(5) << std::setprecision(2) << p.f_points[i] << "\t" 
        << std::setw(8) << std::setprecision(2) << std::fixed << Polynom1.get_polynom_value(i) << "\t"
        << std::setw(8) << std::setprecision(2)<< std::fixed << Polynom3.get_polynom_value(i) << "\t"
        << std::setw(8) << std::setprecision(2)<< std::fixed << Polynom6.get_polynom_value(i) << "\n";
    if (Polynom1.write_to_file(u, p))                                         // запись в csv-файл для дальнейшего построения графиков в excel
        std::cout << std::endl << "Запись в файл произведена успешно";
    else
        std::cout << std::endl << "Ошибка записи в файл!";
    if (Polynom3.write_to_file(u, p)) 
        std::cout << std::endl << "Запись в файл произведена успешно";
    else
        std::cout << std::endl << "Ошибка записи в файл!";
    if (Polynom6.write_to_file(u, p)) 
        std::cout << std::endl << "Запись в файл произведена успешно";
    else
        std::cout << std::endl << "Ошибка записи в файл!";
    return 0;
}