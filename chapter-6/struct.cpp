// struct.cpp -- выводит значения полей структуры по запросу
#include <iostream>
#include <string>

using namespace std;

void menu(void);
//void field(bop massiv[3], int pref);
const int strsize = 100;
struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
} mas_bop[3] {
    {"Петров Иван Иваныч", "начальник отдела", "Boss", 2},
    {"Сидоров Петр Петрович", "инженер", "Superhero", 0},
    {"Васечкин Сергей Сергеевич", "сисадмин", "Magic_power", 1}
};

int main()
{
    setlocale(LC_ALL, "RUS");
    char ch;
    menu();
    while ((ch = cin.get()) != 'q')
    {
        cin.get();
        switch (ch)
        {
            case 'a':
                cout << endl;
                for (int i = 0; i < 3; i++)
                    cout << mas_bop[i].fullname << "\t";
            break;
            case 'b':
                cout << endl;
                for (int i = 0; i < 3; i++)
                    cout << mas_bop[i].title << "\t";
            break;
            case 'c':
                cout << endl;
                for (int i = 0; i < 3; i++)
                    cout << mas_bop[i].bopname << "\t";
            break;
            case 'd':
                cout << endl;
                for (int i = 0; i < 3; i++)
                {
                    switch (mas_bop[i].preference)
                    {
                        case 0:
                            cout << mas_bop[i].fullname << "\t";
                        break;
                        case 1:
                            cout << mas_bop[i].title << "\t";
                        break;
                        case 2:
                            cout << mas_bop[i].bopname << "\t";
                        break;
                    }
                }
            break;
            default: 
                cout << endl << "Wrong char! Try again: ";
                continue;
            
        }
        menu();
    }
    cin.get();
    return 0;
}

void menu(void)
{
    cout << endl << "Список программеров 9 отдела: \na. показать по именам\tb. показать по должностям\n"
    << "c.показать по никам\t d. показать по избранному параметру\nq. quit (выйти)\n";
}

/*void field(bop massiv[3], int pref)
{
    switch (pref)
    {
        case 0:
            cout << endl << masi
        break;
        case 1:
        break;
        case 2:
        break;
    }
}  */ 
