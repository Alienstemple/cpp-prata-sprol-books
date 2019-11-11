#include <iostream>
#include "person.h"
Person::Person(const std::string & ln, const char * fn)
{
    lname = ln;
    int i = 0;
    while (fn[i] && i < LIMIT)
    {
        fname[i] = fn[i];
        i++;
    }
}
void Person::Show() const
{
    std::cout << std::endl << fname << "\t" << lname;
}
void Person::FormalShow() const
{
    std::cout << std::endl << lname << ", " << fname;
}