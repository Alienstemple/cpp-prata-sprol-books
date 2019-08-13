// mediana.cpp -- нахождение медианы
#include <iostream>
#include <cstdlib>
using namespace std;
const int NUM_AGENTS = 3;
const int NUM_MONTHS = 12;
int cmpf(const void * A, const void * B);
void show(const int (*mas)[NUM_MONTHS], int size);
void max_med(int (*mas)[NUM_MONTHS], int size);
int main()
{
    int sales[NUM_AGENTS][NUM_MONTHS] = {
        {1856, 498, 30924, 87478, 328, 2653, 387, 3754, 387587, 2873, 276, 32},
        {5865, 5456, 3983, 6464, 9957, 4785, 3875, 3838, 4959, 1122, 7766, 2534},
        {23, 55, 67, 99, 265, 376, 232, 223, 4546, 564, 4544, 3434}
    };
    show (sales, NUM_AGENTS);
    for (int i = 0; i < NUM_AGENTS; i++)
        qsort (sales[i], NUM_MONTHS, sizeof(int), cmpf);
    show (sales, NUM_AGENTS);
    max_med(sales, NUM_AGENTS);
    cin.get();
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
void max_med(int (*mas)[NUM_MONTHS], int size)
{
    int max_med(0);
    int max_agent(0);
    for (int i = 0; i < NUM_AGENTS; i++)
    {
        int med = (mas[i][(NUM_MONTHS - 2) / 2] + mas[i][NUM_MONTHS / 2]) / 2;
        if (med > max_med)
        {
            max_med = med;
            max_agent = i;
        }
    }
    cout << endl << "Maximal mediana value = " << max_med << " has agent #" << max_agent+1 << endl;
}