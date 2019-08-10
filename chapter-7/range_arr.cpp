// range_arr.cpp -- передача в ф-ю начального и конечного знач диапазона массива
#include <iostream>
const int Max = 5;

// function prototypes
double * fill_array(double ar[], int limit);
void show_array(const double * ar_start, const double * ar_end);  // don't change data
void revalue(double r, double * ar_start, double * ar_end);

int main()
{
    using namespace std;
    double properties[Max];

    double * size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    // cin.get();
    return 0;
}

double * fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << " (-1 to stop): ";
        cin >> temp;
        if (!cin)    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; input process terminated.\n";
           break;
        }
        else if (temp < 0)     // signal to terminate
            break;
        ar[i] = temp;
    }
    ar[i] = 0;
    return &ar[i];
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double * ar_start, const double * ar_end)
{
    using namespace std;
    int i = 0;
    const double * ptr = ar_start;
    for (i, ptr; ptr < ar_end; i ++, ptr++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *(ptr) << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double * ar_start, double * ar_end)
{
    double* ptr = ar_start;
    for (ptr; ptr != ar_end; ptr++)
        *ptr *= r;
}
