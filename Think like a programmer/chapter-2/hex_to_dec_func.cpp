// hex_to_dec_func.cpp -- отдельное тестирование функции по перев из 16-ричн в 10-чное число
#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
void hex_to_dec (int num[], int size);
int main()
{
    int hex[20];
    int hexsize = 0;
    char input;
    cout << endl << "Enter heximal number (use only big letters A-F!): ";
    while (((input = cin.get()) != '\n') && (hexsize < 20))
    {
       /* while (input < 48 || (input > 57 && input < 65) || input > 70)
        {
            cin.clear();
            cout << endl << "Wrong number! Try again!" << endl;
            continue;
        }  */
        if (isalpha(input))
            hex[hexsize] = 10 + input - 'A';
        else
            hex[hexsize] = input - '0';
        hexsize++;
    }
    cout << endl;
    for (int i = 0; i < hexsize; i++)
        cout << endl << *(hex+i);
    hex_to_dec(hex, hexsize);
    cin.get();
    return 0;
}
void hex_to_dec (int num[], int size)
{
    int out = 0;
    int i, count;
    for (i = size - 1, count = 0; i >= 0, count < size; i--, count++)// идем по масс в обр напр
        out += num[i] * pow(16, count);                    // берем по модулю 16
    cout << endl << "Decimal number: " << out << endl;
}
