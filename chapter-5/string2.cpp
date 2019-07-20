// string.cpp -- ввод слов до тех пор, пока не введем done
#include <iostream>
#include <string>
     
int main()
{
using namespace std;
setlocale(LC_ALL, "RUS");
string str;
int count=0;
cout << endl << "Вводите слова, а чтобы прекратить ввод, напишите done" << endl;
cin >> str;
while (str != "done")
{
    cin >> str;
    ++count;
}
cout << endl << count << " слов введено, исключая done" << endl;
cin.get();
return 0;
}

