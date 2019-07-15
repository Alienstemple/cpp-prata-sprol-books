// mod10.cpp -- выводит число в обратном порядке
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int num = 8591;
    cout << endl << "8591 в обратном порядке: ";
    cout << num%10;
    cout << (num/10)%10;
    cout << (num/100)%10;
    cout << num/1000;
    cin.get();
    return 0;
}
