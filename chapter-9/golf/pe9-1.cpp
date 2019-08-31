#include "golf.h"
int SIZE = 5;
int main()
{
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);
    golf students[SIZE];
    int i = 0;
    for (i; i < SIZE; i++)
    {
        if (setgolf(students[i]) == 0)
            break; 
    }
    for (int j = 0; j < i; j++)
        showgolf(students[j]);
    return 0;
}
