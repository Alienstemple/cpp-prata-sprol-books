// gavage.cpp -- сумма пожертвований в зависимости от размера, динамический массив структур
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Gavage {
    string name;
    double sum;
};
int main()
{
    setlocale(LC_ALL, "RUS");
    ifstream Input;
    Input.open("gavage.txt");
    while (!Input.eof())
    {
        int amount;
        (Input >> amount).get();	
		Gavage* gavage = new Gavage[amount];

   	 for (int i = 0; i < amount; i++)
    {
        getline(Input, (*(gavage+i)).name);
        (Input >> (*(gavage+i)).sum).get();
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
    Input.get();
    }
Input.close();
    cin.get();
    return 0;
}

