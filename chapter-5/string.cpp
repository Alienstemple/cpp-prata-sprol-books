// string.cpp -- ввод слов до тех пор, пока не введем done
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "RUS");
    char mas[20];
    int count=0;
    cout << endl << "Вводите слова, а чтобы прекратить ввод, напишите done" << endl;
    cin >> mas;
    while (strcmp(mas, "done"))
    {
        cin >> mas;
        ++count;
    }
    cout << endl << count << " слов введено, исключая done" << endl;
    cin.get();
    return 0;
}
