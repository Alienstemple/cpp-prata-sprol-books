#include <iostream>
#include "bill.h"
Bill::Bill(const std::string & name, const std::string num_of_bill, double balance)
{
    m_name = name;
    m_num_of_bill = num_of_bill;
    m_balance = balance;
}
void Bill::show() const
{
    std::cout << std::endl << "Name: " << m_name
    << "\nNumber of bill: " << m_num_of_bill
    << "\nBalance: " << m_balance;
}
void Bill::add(double sum)
{
    m_balance += sum;
}
void Bill::take(double sum)
{
    if (sum > m_balance)
        std::cout << std::endl << "Cannot do operation, sum > balance";
    else
        m_balance -= sum;
    
}