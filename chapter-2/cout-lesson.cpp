#include <iostream>
#include <cmath>
using namespace std;
void mice();
void run();
double temper(int cels);
double astronomy (double l_y);
void time (int h, int m);
int main()
{
    cout << "Hello, summer lessons! " << endl;
    cout << "Please, enter number of farlons: " << endl;
    int farl, age;
    cin >> farl;
    cout << "It's " << farl*220 << " yards. " << endl;
    cout << "Please, enter your age in years: " << endl;
    cin >> age;
    cout << "You are " << age*12 << " months old." << endl;
    mice(); mice();
    run(); run();
    cout << endl << "And now enter temperature in Celsius:" << endl;
    int G;
    cin >> G;
    cout << temper(G) << endl;
    cout << endl << "And now it's time to do some astronomy! \n Please, enter number of light years: " << endl;
    double light_years;
    cin >> light_years;
    cout << astronomy(light_years) << endl;
    cout << "\nWhat time is it? Please, enter number of hours: " <<endl;
    int hours, minutes;
    cin >> hours;
    cout << "Enter number of minutes: " << endl;
    cin >> minutes;
    time (hours, minutes); 
    cin.get();
    return 0;    
}
void mice()
{
    cout << "Three blind mice. " << endl;
}
void run()
{
    cout << "See how they run." << endl;
}
double temper (int cels)
{
    return (1.8*cels + 32);
}
double astronomy (double l_y)
{
    return l_y*63240;
}
void time (int h, int m)
{
    cout << "Time: " << h << ":" << m<< endl;
}
