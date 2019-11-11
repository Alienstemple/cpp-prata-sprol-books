#include <iostream>
#include "sales.h"
int main()
{
    using namespace SALES;
    int number = 0;
    double array[4];
    std::cout << std::endl << "Enter " << number + 1 << " sale (q to quit): ";
    while ((std::cin >> array[number]) && number + 1 < 4)
    {
        std::cout << std::endl << "Enter " << number + 2 << " sale (q to quit): ";
        ++number;
    }
    ++number;   // инкремент number
    std::cout << "Number = " << number;
    Sales year1(array, number);
    Sales year2;
    year2.setSales();
    year1.showSales();
    year2.showSales();
    return 0;
}