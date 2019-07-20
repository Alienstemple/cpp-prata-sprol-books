// nxn_mas.cpp -- заполняет двумерый динамический массив символов по побочной диагонали

#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "RUS");
    int n;
    cout << endl << "Введите размер символьного массива n x n: ";
    cin >> n;
    cout << endl;

    char** mas = new char* [n];
    for (int i=0; i<n; i++)
        mas[i] = new char[n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if ((i+j)<=n-2)
                mas[i][j] = '.';
            else
                mas[i][j] = '*';
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
            cout << mas[i][j];
        cout << endl;
    }
    cin.get();
    return 0;
}
