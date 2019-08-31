// sales.cpp -- functions for ex4.cpp
#include <iostream>
#include "sales.h"
namespace SALES
{
    void setSales(Sales & s, const double ar[], int n)
    {
        for (int i = 0; i < n; i++)
            s.sales[i] = ar[i];
        while (n < QUARTERS)
        {
            s.sales[n + 1] = 0;
            n++;
        }
        s.min = s.sales[0];
        s.max = 0;
        s.average = 0;
        double total(0);
        for (int i = 0; i < QUARTERS; i++)
        {
            if (s.sales[i] > s.max)
                s.max = s.sales[i];
            if (s.sales[i] < s.min)
                s.min = s.sales[i];
            total += s.sales[i];
        }
        s.average = total / QUARTERS;
    }

    void setSales(Sales & s)
    {
        int i = 0;
        std::cout << std::endl << "Enter " << i+1 << " sale (q to quit): ";
        while ((std::cin >> s.sales[i]) && (i + 1) < QUARTERS)
        {
            std::cout << std::endl << "Enter " << i+2 << " sale (q to quit): ";
            ++i;
        }
        while (i < QUARTERS)
        {
            s.sales[i + 1] = 0;
            i++;
        }
        s.min = s.sales[0];
        s.max = 0;
        s.average = 0;
        double total(0);
        for (int i = 0; i < QUARTERS; i++)
        {
            if (s.sales[i] > s.max)
                s.max = s.sales[i];
            if (s.sales[i] < s.min)
                s.min = s.sales[i];
            total += s.sales[i];
        }
        s.average = total / QUARTERS;

    }

    void showSales(const Sales & s)
    {
        for (int i = 0; i < QUARTERS; i++)
            std::cout << s.sales[i] << "\t";
        std::cout << std::endl << "Max = " << s.max << "\tMin = " << s.min << "\tAverage = " << s.average << std::endl;
    }
}
