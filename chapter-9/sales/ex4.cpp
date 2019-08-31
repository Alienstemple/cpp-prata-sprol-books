// ex4.cpp
#include <iostream>
#include "sales.h"
int main()
{
    using namespace SALES;
    Sales year1, year2;
    int number = 0;
    double array[QUARTERS];
    std::cout << std::endl << "Enter " << number + 1 << " sale (q to quit): ";
    while ((std::cin >> array[number]) && number + 1 < QUARTERS)
    {
        std::cout << std::endl << "Enter " << number + 2 << " sale (q to quit): ";
        ++number;
    }
    ++number;
    std::cout << "Number = " << number;
    setSales(year1, array, number);
    setSales(year2);
    showSales(year1);
    showSales(year2);
    return 0;
}
