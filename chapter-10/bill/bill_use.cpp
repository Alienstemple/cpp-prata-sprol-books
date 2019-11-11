#include <iostream>
#include "bill.h"
int main(int argc, char *argv[])
{
    Bill null_bill;
    null_bill.show();
    Bill my_bill = Bill("Vasya", "68930", 60000.5);
    my_bill.show();
    my_bill.add(500.0);
    my_bill.show();
    Bill friend_bill("Petya", "84675", 50000.8);
    friend_bill.show();
    friend_bill.take(500.0);
    friend_bill.show();
    return 0;
}