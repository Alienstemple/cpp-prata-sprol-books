// candybar.cpp -- устанавливает значения полей структуры и выводит их
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
struct CandyBar {
    string name;
    double weight;
    int calories;
} candybox;
void set(CandyBar & box, string n = "Millenium Munch", double w = 2.85, int c = 350);
void show(const CandyBar & box);
int main()
{
    set(candybox);
    show(candybox);
    set(candybox, "Himalai", 1.95, 400);
    show(candybox);
    return 0;
}
void set(CandyBar & box, string n, double w, int c)
{
    box.name = n;
    box.weight = w;
    box.calories = c;
}
void show(const CandyBar & box)
{
    cout << endl << "Candy Box: " << endl << box.name << "\t\t" << box.weight << " kilo\t" 
    << box.calories << " calories" << endl;
}