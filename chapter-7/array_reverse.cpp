// array_reverse.cpp -- функции по работе с массивами, изменяет порядок элементов
#include <iostream>
using namespace std;
const int arrsize = 10;
int Fill_array(double *, int size);
void Show_array(const double *, int size);
void Reverse_array(double *, int size);
int main()
{
    double array[arrsize];
    int realsize = Fill_array(array, arrsize);
    cout << endl << "Our array: \n";
    Show_array(array, realsize);
    //double* ptr = &array[1];
    int r = realsize - 1; 
    Reverse_array(&array[1], r);                  // переворачиваем кроме первого и последнего
    cout << endl << "Now our array: \n";
    Show_array(array, realsize);
    cin.get();
    return 0;
}
int Fill_array(double * arr, int size)
{
    cout << endl << "Enter array (letter to stop): ";
    int i = 0;
    while ((cin >> arr[i]) && (i++ < size));
    return i;
}
void Show_array(const double * arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << "\t";
}
void Reverse_array(double * arr, int size)
{
    int i = 0, j = size-2;
    double temp;
    for (i, j; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}