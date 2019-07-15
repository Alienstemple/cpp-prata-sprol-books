// snackmas.cpp -- вывод полей массива структур
#include <iostream>
#include <string>
using namespace std;
 
 struct CandyBar
 {
     string name;
     float weight;
     int calories;
 } snack[3] 
 {
     {"Mocha Munch", 2.3 , 350},
     {"Mechta", 1.5, 200},
     {"Mishki", 3.5, 800}
};
 
 int main()
 {
     cout << endl << "Our snack1 calls " << snack[0].name << ", it's weight is " << snack[0].weight
     << " kilo and it has " << snack[0].calories << " calories. \nHave a good appetite! \n";
     cout << endl << "Our snack1 calls " << snack[1].name << ", it's weight is " << snack[1].weight
     << " kilo and it has " << snack[1].calories << " calories. \nHave a good appetite! \n";
     cout << endl << "Our snack1 calls " << snack[2].name << ", it's weight is " << snack[2].weight
     << " kilo and it has " << snack[2].calories << " calories. \nHave a good appetite! \n";

     cin.get();
     return 0;
 }

