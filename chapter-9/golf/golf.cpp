#include <iostream>
#include <cstring>
#include "golf.h"
void setgolf(golf & g, const char * name, int he)
{
    for (int i = 0; i < Len && name[i] != '\0'; i++)
        g.fullname[i] = name[i];
    g.handicap = he;
}
int setgolf(golf & g)
{
    std::cout << std::endl << "Enter the name (Enter to quit): ";
    std::cin.get(g.fullname, Len);
    if (strlen(g.fullname) == 0)    // выход по пустой строке
        return 0;
    else 
        {
            std::cout << std::endl << "Enter the handicap: ";
            (std::cin >> g.handicap).get();
            return 1;
        }
}
void handicap(golf & g, int he)
{
    g.handicap = he;
}
void showgolf(const golf & g)
{
    std::cout << std::endl << "Name: " << g.fullname 
    << std::endl << "Handicap: " << g.handicap << std::endl;
}