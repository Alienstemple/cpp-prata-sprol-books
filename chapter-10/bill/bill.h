#ifndef BILL_H_
#define BILL_H_
#include <iostream>
#include <string>

class Bill
{
    private:
        std::string m_name;
        std::string m_num_of_bill;
        double m_balance;
    public:
        Bill() {m_name = "no name"; m_num_of_bill = "---"; m_balance = 0;}
        Bill(const std::string & name, const std::string num_of_bill, double balance);
        ~Bill() {std::cout << std::endl << "object deleted";}
        void show() const;
        void add(double sum);
        void take(double sum);
};
#endif