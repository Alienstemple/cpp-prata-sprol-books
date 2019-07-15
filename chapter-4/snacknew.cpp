// snackmas.cpp -- вывод полей массива структур
#include <iostream>
#include <string>
using namespace std;
 
struct CandyBar
{
    string name;
    float weight;
    int calories;
};
                         
int main()
{
    CandyBar* snack = new CandyBar[3];
    *snack = {"Mocha Munch", 2.3 , 350};
    *(snack+1) = {"Mechta", 1.5, 200};
    *(snack+2) = {"Mishki", 3.5, 800};
 cout << endl << "Our snack1 calls " << (*snack).name << ", it's weight is " << (*snack).weight
 << " kilo and it has " << (*snack).calories << " calories. \nHave a good appetite! \n";
 cout << endl << "Our snack1 calls " << (*(snack+1)).name << ", it's weight is " 
 << (*(snack+1)).weight << " kilo and it has " << (*(snack+1)).calories 
 << " calories. \nHave a good appetite! \n";
 cout << endl << "Our snack1 calls " << (*(snack+2)).name << ", it's weight is "
 << (*(snack+2)).weight << " kilo and it has " << (*(snack+2)).calories 
 << " calories. \nHave a good appetite! \n";
    delete [] snack;
    cin.get();
    return 0;
}

