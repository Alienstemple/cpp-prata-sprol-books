// sum.cpp -- считает сумму целых от а до в
#include <iostream>

int main()
{
    using namespace std;
    int a, b, sum = 0;
    cout << endl << "Enter 2 integer: ";
    cin >> a >> b;

    while (a <= b)
    {
        sum = sum + a;
        ++a;
    }
    cout << endl << "Sum of integer between a and b: " << sum << endl;
    cin.get();
    return 0;
}
