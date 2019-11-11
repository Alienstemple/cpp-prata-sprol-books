#ifndef SALES_H_
#define SALES_H_
namespace SALES
{
    using namespace std;
    class Sales
    {
        private:
            enum {QUARTERS = 4};
            double sales[QUARTERS];
            double average;
            double max;
            double min;
        public:
            Sales() {sales[0] = 0; average = 0; max = 0; min = 0;}
            Sales(const double ar[], int n);
            ~Sales();
            void setSales();
            void showSales() const;
    };
}
#endif