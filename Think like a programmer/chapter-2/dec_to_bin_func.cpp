// dec_to_bin_func.cpp
#include <iostream>
using namespace std;
void dec_to_bin (int num);
int main()
{
    int number;
    cout << endl << "Enter decimal nmber: ";
    cin >> number;
    dec_to_bin(number);
    cin.get();
    return 0;
}
void dec_to_bin (int num)
{
    int out[100];
    int size = 0;
    while (num != 1)
    {
        out[size] = num % 2;
        num /= 2;
        size++;
    }
    out[size] = 1;
    int i, j, temp;
    for (i = 0, j = size; i < j; i++, j--)
    {
        temp = out[i];
        out[i] = out[j];
        out[j] = temp;
    }
    cout << endl << "Binary nmber: ";
    for (int i = 0; i < size + 1; i++)
        cout << out[i];
    cout << endl;
}
