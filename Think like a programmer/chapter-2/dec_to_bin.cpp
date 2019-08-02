// dec_to_bin.cpp -- перевод числа из десятичной в двоичную систему
#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    int number, size = 0;
    //vector<int> binary;
    int binary[100];
    cout << endl << "Enter decimal number: ";
    cin >> number;

    while (number != 1)
    {
        binary[size] = number % 2;
        number /= 2;
        size++;
    }
    binary[size] = 1;
    int i, j, temp;
    for (i = 0, j = size; i < j; i++, j--)
    {
        temp = binary[i];
        binary[i] = binary[j];
        binary[j] = temp;
    } 
    cout << endl << "Binary number: ";
    for (int i = 0; i < size + 1; i++)
        cout << binary[i];
    cout << endl;
    cin.get();
    return 0;
}
