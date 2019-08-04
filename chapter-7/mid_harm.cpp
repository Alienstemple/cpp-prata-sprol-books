// mid_harm.cpp -- вычисляет среднее гармоническое
#include <iostream>
double mid_harm(int, int);
int main()
{
    using std::endl;
    using std::cout;
    using std::cin;
    int a, b;
    cout << "Enter two numbers: ";
    for (cin >> a >> b; (a != 0) && (b != 0); cin >> a >> b)
    {
        cout << endl << "Middle harmonic: " << mid_harm(a, b);
        cout << endl << "Enter two numbers: ";
    }
    cout << endl << "One or both numbers == 0, end of program.\n";
    cin.get();
    return 0;
}
double mid_harm(int x, int y)
{
    return 2 * x * y / (x + y);
}