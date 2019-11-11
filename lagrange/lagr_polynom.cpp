#include <iostream>
#include <cmath>
#include <fstream>
#include "lagr_polynom.h"
namespace LAGRANGE
{
    void set_units(unit & u)
    {
        u.x_points[0] = -2;
        for (int i = 1; i < POINTS_1; ++i)
            u.x_points[i] = u.x_points[i-1] + 0.5;
        for (int i = 0; i < POINTS_1; ++i)
            u.f_points[i] = pow(u.x_points[i], 6) - u.x_points[i];            // наша ф-я: y = x^6 - x
    }
    void set_points(point & p)
    {
        p.x_points[0] = -3;
        for (int i = 1; i < POINTS_2; i++)
        {
            p.x_points[i] = p.x_points[i-1] + 0.12;
            if (fabs(p.x_points[i]) < 0.01)                  // во избежание малых экспоненциальных значений 
                p.x_points[i] = 0;
        }
        for (int i = 0; i < POINTS_2; i++)
        {
            p.f_points[i] = pow(p.x_points[i], 6) - p.x_points[i];
            if (fabs(p.f_points[i]) < 0.01)                // во избежание малых экспоненциальных значений 
                p.f_points[i] = 0;
        }
    }
    void Lagr_Polynom::calculate_polynom(const unit & u, const point & p)
    {
        for (int x = 0; x < POINTS_2; x++)                     // временная заглушка
        {
            polynom_values[x] = 0;
            for (int i = 0; i <= _order; i++)
            {
                double w[POINTS_2][_order+1];                       // дробь из скобок
                int iter1, iter2;
                for (iter1 = 0; iter1 < POINTS_2; iter1++) 
                {
                    for (iter2 = 0; iter2 < _order+1; iter2++)
                        w[iter1][iter2] = 1;   // по умолчанию инициализ 1 черный ящик
                }
                for (int j = 0; j <= _order; j++)
                {
                    if (j != i)
                        w[x][i] *= (p.x_points[x] - u.x_points[j])/(u.x_points[i] - u.x_points[j]);
                }
                polynom_values[x] += u.f_points[i] * w[x][i];
            }
        }
    }
    Lagr_Polynom::Lagr_Polynom(int order, const unit & u, const point & p)
    {
        _order = order;
        calculate_polynom(u, p);
    }
    double * Lagr_Polynom::get_polynom_arr()          // возвращает указатель на весь массив
    {
        return polynom_values;
    }
    double Lagr_Polynom::get_polynom_value(int i)   // возвращает i-е значение
    {
        return polynom_values[i];
    }
    bool Lagr_Polynom::write_to_file(const unit & u, const point & p)
    {
        std::ofstream Out;
        Out.open("out.csv", std::ios::app);
        if (!Out)
        {
            std::cout << std::endl << "Problem with opening file!\n";
            return false;
        }
        for (int i = 0; i <= POINTS_2; i++)
            Out << p.x_points[i] << "\n" << std::fixed << polynom_values[i] << "\n";
        Out << "\n";
        Out.close();
        return true;
    }
}