// teststart.cpp -- тестируем границы sales массива, сортируем от -1 до -1
// проблемы с qsort -- не сортирует
#include <iostream>
#include <cstdlib>
using namespace std;
const int NUM_AGENTS = 3;
const int NUM_MONTHS = 12;
int cmpf(const void * A, const void * B);
void show(const int (*mas)[NUM_MONTHS], int size);
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
        int average(0);
        int total(0);
        int start(0);                                // отбрасываем ненужные значения, чтоб добраться до start
        while (sales[i][start] != -1) start++;
        start++;                                     // start+1 чтоб не учитывал -1 в начале
        //int * ptr_start = &sales[i][start];          // указат на начало sales
        int count(0);
        while (sales[i][start + count] != -1)     //находим конец массива
        {
         // qsort (ptr_start, count, sizeof(int), cmpf);
            cout << sales[i][start + count] << " ";
            total += sales[i][start + count];
            count++;
        }
        average = total / count;
        cout << endl << "Average: " << average;
        if (average > max_value)
            max_value = average;
    }
    cout << endl << "Max average: " << max_value;
    //show (sales, NUM_AGENTS);
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