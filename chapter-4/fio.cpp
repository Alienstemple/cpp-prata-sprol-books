// fio.cpp -- отображает фамилию и имя
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "RUS");
    char name[15], sname[15], output[30];
    cout << endl << "Введите имя: ";
    cin.getline(name, 15);
    cout << endl << "Введите фамилию: ";
    cin.getline(sname, 15);

    strncpy(output, sname, 15);
    strcat(output, ", ");
    strcat(output, name);

    cout << endl << "Ваша информация: " << output;
    cin.get();
    return 0;
}
