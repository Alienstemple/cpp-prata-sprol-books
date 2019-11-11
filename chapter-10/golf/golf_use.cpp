#include "golf.h"
int SIZE = 5;
int main()
{
    Golf Ann;
    Ann.showgolf();
    Golf Bill("Bill", 78);
    Bill.showgolf();
    int x = 99;
    Bill.set_handicap(x);
    Bill.showgolf();
    Golf Sam;
    Sam.set_golf();
    Sam.showgolf();
    return 0;
}