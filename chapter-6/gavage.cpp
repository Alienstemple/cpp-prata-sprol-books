// gavage.cpp -- сумма пожертвований в зависимости от размера, динамический массив структур
#include <iostream>
#include <string>
using namespace std;
struct Gavage {
    string name;
    double sum;
};
int main()
{
    //using namespace std;
    setlocale(LC_ALL, "RUS");
    int amount;
    cout << endl << "Введите количество меценатов: ";
    (cin >> amount).get();
    Gavage* gavage = new Gavage[amount];

    cout << endl << "Введите имена меценатов и суммы пожертвований: ";
    for (int i = 0; i < amount; i++)
    {
        cout <<endl << "Имя " << i+1 << " : ";
        getline(cin, (*(gavage+i)).name);
        cout << endl << "Сумма " << i+1 << " : ";
        (cin >> (*(gavage+i)).sum).get();
    }

    int count1 = 0, count2 = 0;
    cout << endl << "Лучшие патроны: ";
    for (int i = 0; i < amount; i++)
    {
        if ((*(gavage+i)).sum >= 10000) {
            cout << endl << (*(gavage+i)).name << "\t" << (*(gavage+i)).sum;
            count1++;
        }
    }
    if (count1 == 0)
        cout << endl << "Нет таких";
    cout << endl;
    for (int i = 0; i < amount; i++)
    {
        if ((*(gavage+i)).sum < 10000) {
            cout << endl << (*(gavage+i)).name << "\t" << (*(gavage+i)).sum;
            count2 ++;
        }
    }
    if (count2 == 0)
        cout << endl << "Нет таких";
    cout << endl;
    cin.get();
    return 0;
}
