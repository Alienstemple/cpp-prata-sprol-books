#include <iostream>
#include "golf.h"
Golf::Golf() 
{
    fullname[0] = '\0';
    handicap = 0;
}
Golf::Golf(const char * name, int he)
{
    int i = 0;
    while (name[i] && i < Len)
    {
        fullname[i] = name[i];
        i++;
    }
    handicap = he;
}
void Golf::set_golf()
{
    char fname[Len];
    int he;
    std::cout << std::endl << "Enter the name: ";
    std::cin.get(fname, Len);
    std::cout << std::endl << "Enter the handicap: ";
    (std::cin >> he).get();
    Golf temp(fname, he);
    int i = 0;
    while (temp.fullname[i] && i < Len)
    {
        this->fullname[i] = temp.fullname[i];
        i++;
    }
    this->handicap = temp.handicap;
}
void Golf::set_handicap(int he)
{
    handicap = he;
}
void Golf::showgolf() const
{
     std::cout << std::endl << "Name: " << fullname 
    << std::endl << "Handicap: " << handicap << std::endl;
}