// mediana_average_hard.cpp -- вычисляет max медианное и max среднее значение массива, огранич. -1
#include <iostream>
#include <cstdlib>
using namespace std;
const int NUM_AGENTS = 3;
const int NUM_MONTHS = 12;
int cmpf(const void * A, const void * B);
void show(const int (*mas)[NUM_MONTHS], int size);
int division(int start, int end);
int mediana(int * arr, int s, int c);
int sales[NUM_AGENTS][NUM_MONTHS] = {
    {1876, 498, -1, 87478, 328, 2653, 387, 3754, 387587, 2873, -1, 32},
    {5865, 5456, 3983, -1, 9957, 4785, 3875, 3838, 4959, 1122, -1, 2534},
    {23, 55, -1, 99, 265, 376, 232, 223, 4546, 564, 4544, -1}
};
int main()
{
    show (sales, NUM_AGENTS);
    int max_value(0);
    for (int i = 0; i < NUM_AGENTS; i++)
    {
        int start(0);                                // отбрасываем ненужные значения, чтоб добраться до start
        while (sales[i][start] != -1) start++;
        start++;                                     // start+1 чтоб не учитывал -1 в начале
        int * ptr_start = &sales[i][start];          // указат на начало sales
        int count(0);
        while (sales[i][start + count] != -1) count++;     //находим конец массива
        qsort (ptr_start, count, sizeof(int), cmpf);
        cout << endl << "Mediana: " << mediana(sales[i], start, count);
        if (mediana(sales[i], start, count) > max_value)
            max_value = mediana(sales[i], start, count);
    }
    cout << endl << "Max mediana: " << max_value << endl;
    show (sales, NUM_AGENTS);
    cout << endl;
    return 0;
}
int cmpf(const void * A, const void * B)
{
    int * iA = (int *) A;
    int * iB= (int *) B;
    return *iA - *iB;
}
void show(const int (*mas)[NUM_MONTHS], int size)
{
    cout << endl << "Our massiv: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < NUM_MONTHS; j++)
            cout << mas[i][j] << "\t";
        cout << endl;
    }

}
int division(int start, int end)
{
    return (start + (end - start) / 2);
}
int mediana(int * arr, int s, int c)
{
    int half_ind = division(s, s + c);
    if (c % 2 == 0)                      // кол-во эл-тов четное
        return (arr[half_ind] + arr[half_ind - 1]) / 2;
    else
        return arr[half_ind];
}