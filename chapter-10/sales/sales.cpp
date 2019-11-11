#include <iostream>
#include "sales.h"
namespace SALES
{
    Sales::Sales(const double ar[], int n)
    {
        for (int i = 0; i < n; i++)
            sales[i] = ar[i];
        while (n < QUARTERS)
        {
            sales[n + 1] = 0;
            n++;
        }
        min = sales[0];
        max = 0;
        average = 0;
        double total(0);
        for (int i = 0; i < QUARTERS; i++)
        {
            if (sales[i] > max)
                max = sales[i];
            if (sales[i] < min)
                min = sales[i];
            total += sales[i];
        }
        average = total / QUARTERS;
    }
    Sales::~Sales() {std::cout << "\nObject deleted\n";}
    void Sales::setSales()
    {
        int i = 0;
        double s[QUARTERS]; 
        std::cout << std::endl << "Enter " << i+1 << " sale (q to quit): ";
        while ((std::cin >> s[i]) && (i + 1) < QUARTERS)
        {
            std::cout << std::endl << "Enter " << i+2 << " sale (q to quit): ";
            ++i;
        }
        Sales temp(s, i+1);   // инкремент i
        for (int i = 0; i < QUARTERS; i++)
            this->sales[i] = temp.sales[i];
        this->min = temp.min;
        this->max = temp.max;
        this->average = temp.average;
        temp.~Sales();
    }
    void Sales::showSales() const
    {
        for (int i = 0; i < QUARTERS; i++)
            std::cout << sales[i] << "\t";
        std::cout << std::endl << "Max = " << max << "\tMin = " << min << "\tAverage = " << average << std::endl;
    }
}