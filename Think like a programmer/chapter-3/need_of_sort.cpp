#include <iostream>
const int SIZE = 10;
int array1[SIZE] {3, 5, 2, 8, 6, 9, 4, 3, 5, 5};
int array2[SIZE] {1, 1, 3, 5, 5, 5, 7, 8, 8, 9};
bool need_of_sort(int * arr, int size = SIZE);
int main()
{
    using namespace std;
    if (need_of_sort(array1)==true)
        cout << endl << "first array need to be sorted" << endl;
    else
        cout << endl << "first array need NOT to be sorted" << endl;
    if (need_of_sort(array2)==true)
        cout << endl << "second array need to be sorted" << endl;
    else
        cout << endl << "second array need NOT to be sorted" << endl;
    cin.get();
    return 0;
}
bool need_of_sort(int * arr, int size)
{
    int flag(0);
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i-1])
            flag++;
    }
    if (flag)            // если нужна сортировка
    {
        std::cout << std::endl << "yes";
        return true;
    }
    else
    {
        std::cout << std::endl << "no";
        return false;
    }
}