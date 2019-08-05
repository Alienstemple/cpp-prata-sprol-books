// ptr_to_func.cpp -- указатели на функции
#include <iostream>
#include <cmath>
double calculate (double, double, double (*ptr)(double, double));
double add(double, double);
double mul(double, double);
double mid(double, double);
int main()
{
    using namespace std;
    double (*pf[3])(double, double);
    pf[0] = add;
    pf[1] = mul;
    pf[2] = mid;
    cout << endl << "Enter x, y: ";
    int x, y;
    while(cin >> x >> y)
    {
        cout << endl << "add = " << calculate(x, y, pf[0])
        << endl << "mul = " << calculate(x, y, pf[1])
        << endl << "mid = " << calculate(x, y, pf[2]) << endl;
    }
    cin.get();
    return 0;
}
double calculate (double a, double b, double (*ptr)(double, double))
{
    return (*ptr)(a, b);
}
double add(double a, double b)
{
    return a + b;
}
double mul(double a, double b)
{
    return a * b;
}
double mid(double a, double b)
{
    return ((a + b) / 2);
}
