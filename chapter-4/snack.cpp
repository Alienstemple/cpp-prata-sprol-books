// snack.cpp -- вывод поелей структуры
#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string name;
    float weight;
    int calories;
} snack {"Mocha Munch", 2.3 , 350};

int main()
{
    cout << endl << "Our snack calls " << snack.name << ", it's weight is " << snack.weight 
    << " kilo and it has " << snack.calories << " calories. \nHave a good appetite! \n";
    cin.get();
    return 0;
}
