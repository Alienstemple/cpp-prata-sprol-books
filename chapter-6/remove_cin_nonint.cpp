// remove_cin_nonint.cpp -- отбрасывание нечислового ввода
#include <iostream>
const int Size = 5;
int main()
{
    using namespace std;
    int mas[Size];
    for (int i = 0; i < Size; i++)
    {
        cout << "Enter " << i+1 << " element: ";
        while (!(cin >> mas[i]))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << " enter a number!!!";
        }
        cout << endl;
    }

    for (int i = 0; i < Size; i++)
    {
        cout << "mas " << i+1 << " = " << mas[i] << endl;
    }
    cin.get();
    return 0;
}
