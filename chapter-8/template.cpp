// template.cpp -- шаблонная функция, возвр. наибольший элт-т массива и ее специализация для массива строк
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::endl;
const int SIZE = 10;
template<typename T>
T maxn(T arr[], int num);
template<>  char * maxn<char *> (char *arr[], int num);
int main()
{
    int mas_int[SIZE] = {2, 1, 5, 8, 4, 3, 6, 3, 4, 9};
    cout << endl << "Int mas: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << mas_int[i] << "\t";
    }
    cout << endl << "Max element: " << maxn (mas_int, SIZE);

    double mas_double[SIZE] = {2.5, 1.3, 5.6, 8.7, 4.5, 3.5, 6.8, 3.2, 4.6, 9.6};
    cout << endl << "Double mas: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << mas_double[i] << "\t";
    }
    cout << endl << "Max element: " << maxn (mas_double, SIZE);

    char mas_str[SIZE][10] = {
        {'h', 'e', 'l', 'l', 'o', '\0'},
        {'t', 'h', 'i', 's', '\0'},
        {'i', 's', '\0'},
        {'w', 'o', 'n', 'd', 'e', 'r', 'f', 'u', 'l', '\0'},
        {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'}
    };
    cout << endl << "Char mas: \n";
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << mas_str[i][j];
        cout << endl;
    }
    cout << endl << "Max string: ";
    char ** max_str;
    max_str = maxn(mas_str, SIZE);   // не использует специализацию
    for (int i = 0; i < SIZE; i++)
    {
        cout << maxn(mas_str[10], SIZE);
    }
    return 0;
}
template<typename T>
T maxn(T arr[], int num)
{
    T max_el(0);
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > max_el)
            max_el = arr[i];
    }
    return max_el;
}
template<>  char * maxn<char *> (char * arr[], int num)
{
    char * max_str;
    int max_symbols(0), max_index(0);
    for (int i = 0; i < num; i++)
    {
        int symbols(0);
        while (arr[i][symbols])
            symbols++;
        if (symbols > max_symbols)
        {
            max_symbols = symbols;
            max_index = i;
        }
    }
    max_str = arr[max_index];
    return max_str;
}