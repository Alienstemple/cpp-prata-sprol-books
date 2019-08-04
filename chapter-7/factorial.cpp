// factorial.cpp -- рекурсивная функция, вычисление факториала
#include <iostream>
long long factorial(long long);
int main()
{
    using namespace std;
    cout << endl << "Enter N: ";
    int num;
    cin >> num;
    cout << endl << "N! = " << factorial(num) << endl;
    cin.get();
    return 0;
}
long long factorial(long long n)
{
    long long fact = 1;
    if (n != 1)
        fact *= n * factorial(n-1);
    return fact;
}