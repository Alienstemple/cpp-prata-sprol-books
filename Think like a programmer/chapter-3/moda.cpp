#include <iostream>
#include <cstdlib>
int cmpf(const void * A, const void * B);
int main()
{
    using namespace std;
    const int SIZE = 10;
    int mas[SIZE] {7, 5, 2, 6, 
    3, 6, 7, 3, 3, 4};
    qsort(mas, SIZE, sizeof(int), cmpf);

    int max_frec(0);
    int current_frec(0);
    int max_frec_el = mas[0];
    int i = 0;
    while (i <= SIZE)
    {
        current_frec++;
        if (mas[i] != mas[i+1] || i == SIZE)
        {
            if (current_frec > max_frec)
            {
                max_frec = current_frec;
                max_frec_el = mas[i];
            }
            current_frec = 0;
        }
        i++;
    }
    cout << endl << "Max frecwently appearing element: " << max_frec_el << " ("<< max_frec << " times)" << endl;
    return 0;
}
int cmpf(const void * A, const void * B)
{
    int * iA = (int *) A;
    int * iB = (int *) B;
    return * iA - * iB;
}