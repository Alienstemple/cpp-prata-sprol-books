// 2_10_16_systems.cpp -- ввод любого числа в 2, 10, 16 системах и перевод в 2 остальные системы
#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
void menu();
void dec_to_bin (int num);
int bin_to_dec (int num[], int size);
void dec_to_hex (int num);
int hex_to_dec (int num[], int size);
int main()
{
    setlocale(LC_ALL, "RUS");
    cout << endl << "Hello! This program translates numbers in binary, decimal or heximal "
    "system\n to binary, decimal and heximal number. Let's go!";
    menu();
    char ch;
    while ((ch = cin.get()) != 'q') 
    {
        switch(ch)
        {
            case '1':
            {
                cin.get();
                cout << endl << "Enter your binary number: ";
                int bin[100];
                int binsize = 0;
                char input;
                while (((input = cin.get()) != '\n') && (binsize < 100))
                {
                    bin[binsize] = input - '0';
                    binsize++;
                }
                int dec = bin_to_dec(bin, binsize);
                dec_to_hex(dec);
            }
            break;
            case '2':
            {
                cin.get();
                cout << endl << "Enter your decimal number: ";
                int dec;
                (cin >> dec).get();
                dec_to_bin(dec);
                dec_to_hex(dec);
            }
            break;
            case '3':
            {
                cin.get();
                int hex[20];
                int hexsize = 0;
                char input;
                cout << endl << "Enter heximal number (use only big letters A-F!): ";
                while (((input = cin.get()) != '\n') && (hexsize < 20))
                {
                    if (isalpha(input))
                        hex[hexsize] = 10 + input - 'A';
                    else
                        hex[hexsize] = input - '0';
                    hexsize++;
                }
                int dec = hex_to_dec(hex, hexsize);
                dec_to_bin(dec);
            }
            break;
            default:
                cin.get();
                cout << endl << "Bad input! Try again!";
                menu();
                continue;
        }
        menu();
    }
    cin.get();
    return 0;
}

void menu()
{
    setlocale(LC_ALL, "RUS");
    cout << endl << "Choose the system in which you would like to"
    " enter a number (\"q\" to quit): "
    << endl << "1 - binary (2) \t2 - decimal (10) \t3 - heximal (16)\n";
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
    cout << endl << "Binary number: ";
    for (int i = 0; i < size + 1; i++)
        cout << out[i];
    cout << endl;
}

int bin_to_dec (int num[], int size)
{
    int out = 0;
    int i, count;
    for (i = size - 1, count = 0; i >= 0, count < size; i--, count++)  // идем по массиву задом наперед
        out += num[i] * pow(2, count);           // 0*2^0 + 1*2^1 + 1*2^2 и т.д. поразрядно
    cout << endl << "Decimal number: " << out << endl;     // вывод 10-чного числа
    return out;
}

void dec_to_hex(int num)
{
    int out[20];
    int size = 0;
    while (num >= 16)
    {
        out[size] = num % 16;
        num /=16;
        size++;
    }
    out[size] = num;
    int i, j, temp;
    for (i = 0, j = size; i < j; i++, j--)
    {
        temp = out[i];
        out[i] = out[j];
        out[j] = temp;
    }

    cout << endl << "Heximal number: ";
    for (int i = 0; i < size+1; i++)
    {
        if (out[i] < 10)
            cout << out[i];
        else switch(out[i])
        {
            case 10: 
                cout << 'A';
            break;
            case 11:
                cout << 'B';
            break;
            case 12:
                cout << 'C';
            break;
            case 13:
                cout << 'D';
            break;
            case 14:
                cout << 'E';
            break;
            case 15:
                cout << 'F';
            break;
            default: 
                cout << "Error!";
            
        }
    }
    cout << endl;
}

int hex_to_dec (int num[], int size)
{
    int out = 0;
    int i, count;
    for (i = size - 1, count = 0; i >= 0, count < size; i--, count++)// идем по масс в обр напр
        out += num[i] * pow(16, count);                    // берем по модулю 16
    cout << endl << "Decimal number: " << out << endl;
    return out;
}