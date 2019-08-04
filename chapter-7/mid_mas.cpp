// mid_mas.cpp -- среднее значений массива
#include <iostream>
using namespace std;
const int maxsize = 10;
int input (int *);
void show (const int *, int);
double middle (const int *, int);
int main()
{
    setlocale(LC_ALL, "RUS");
    int result[maxsize] = {0};
    int realsize = input(result);
    show(result, realsize);
    cout << endl << "Middle of the massiv: " << middle(result, realsize) << endl;
    cin.get();
    return 0;
}

int input (int * res)
{
    int i = 0;
    do {
        cout << endl << "Enter result #" << i + 1 << ": ";
        cin >> res[i];
        cout << endl;
    }  while ((res[i] >= 0) && (i++ < maxsize));
    return i;
}
void show (const int * res, int n)
{
    cout << endl << "Reslts: ";
    for (int i = 0; i < n; i++)
        cout << res[i] << "\t";
}
double middle(const int * res, int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
        total += res[i];
    return double (total) / n;
}
