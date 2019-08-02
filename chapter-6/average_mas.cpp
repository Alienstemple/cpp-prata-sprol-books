// average_mas.cpp -- заполняет массив числами, считает среднее и прекращает выполнение в случае ввода нечислового символа
#include <iostream>
#include <array>
const int Max = 10;
int main()
{
    using namespace std;
    double massiv[Max];
    //array<double, Max> massiv;
    double total = 0;
    int i = 0;
    cout << endl << "Enter element " << i+1 << ": ";

    while (i < Max && cin >> massiv[i])     // Сначала проверяем, не превыси ли размер массива, затем true - если введено число, false - не число,
    {                                       // одновременно заполняем массив числами
        total += massiv[i];
        cout << endl << "Enter element " << i+2 << ": ";
        i++;
    }
    double average = total / i;
    cout << endl << "Average: " << average;     // среднее
    int count = 0;
    for (int j = 0; j < i; j++)
    {
        if (massiv[j] > average)
            count++;
    }
    cout << endl << count << " elements > than average" << endl;  // кол-во эл-тов больше среднего

    cin.get();
    return 0;
}
