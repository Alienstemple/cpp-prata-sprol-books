#include <iostream>
using namespace std;
int compareF(const void * A, const void * B);
int main()
{
    int mas[5] = {5, 1, 7, 2, 8};
    qsort(mas, 5, sizeof(int), compareF);
    for (int i = 0; i<5; i++)
        cout << endl << mas[i];
    return 0;
}
int compareF(const void * A, const void * B)
{
    int * iA = (int *) (A);
    int * iB = (int *) (B);
    return *iA - *iB;
}