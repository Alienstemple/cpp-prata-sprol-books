// func_char_str1.cpp -- функции с массивом char и структурой для double
#include <iostream>
const int Seasons = 4;
const char * Snames[Seasons] =
    {"Spring", "Summer", "Fall", "Winter"};
struct Expence  
{
    double expenses[Seasons];
} costs = {{0}};
void fill(Expence *);
void show(Expence *);
int main()
{
    fill(&costs);
    show(&costs);
    std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(Expence * exp)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> exp->expenses[i];
    }
}

void show(Expence * exp)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << exp->expenses[i] << '\n';
        total += exp->expenses[i];
    }
    std::cout << "Total: $" << total << '\n';
}