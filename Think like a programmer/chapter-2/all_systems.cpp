// 2_10_16_systems.cpp -- ввод любого числа в 2, 10, 16 системах и перевод в 2 остальные системы
#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;
void menu();
void dec_to_some (int num, int base);
int some_to_dec (int num[], int size, int base);
int main()
{
    setlocale(LC_ALL, "RUS");
    cout << endl << "Hello! This program translates numbers in every (2 - 16) "
    "system\n to every system number. Let's go!";

    int base_of_inp_sys;
    cout << endl << "Enter the base of some system (2 - 16) ('q' to qwit): ";
    while (cin >> base_of_inp_sys) 
    {
        cout << endl << "Enter the base of system you wold like to translate your number: ";
        int base_of_out_sys;
        cin >> base_of_out_sys;
        cin.get();
        int input_number[20];
        int input_number_size = 0;
        char input;
        cout << endl << "Enter your number (use only big letters A-F!): ";
        while (((input = cin.get()) != '\n') && (input_number_size < 20))
        {
            if (isalpha(input))
                input_number[input_number_size] = 10 + input - 'A';
            else
                input_number[input_number_size] = input - '0';
            input_number_size++;
        }
        int dec = some_to_dec(input_number, input_number_size, base_of_inp_sys);    //**
        dec_to_some(dec, base_of_out_sys);                       //**
        cout << endl << "Enter the base of some system ('q' to qwit): ";
    }
    cin.get();
    return 0;
}

void dec_to_some(int num, int base)
{
    int out[20];
    int size = 0;
    while (num >= base)
    {
        out[size] = num % base;
        num /= base;
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

    cout << endl << "Output number: ";
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

int some_to_dec (int num[], int size, int base)
{
    int out = 0;
    int i, count;
    for (i = size - 1, count = 0; i >= 0, count < size; i--, count++)// идем по масс в обр напр
        out += num[i] * pow(base, count);                    // берем по модулю 16
    cout << endl << "Decimal number: " << out << endl;
    return out;
}