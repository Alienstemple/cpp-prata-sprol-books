// dec_to_hex_func.cpp -- отдельное тестирование функции по перев 10-ичн в 16-ричн число
#include <iostream>
using namespace std;
void dec_to_hex (int num);
int main()
{
    int number;
    cout << endl << "Enter decimal number: ";
    cin >> number;
    dec_to_hex(number);
    cin.get();
    return 0;
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
