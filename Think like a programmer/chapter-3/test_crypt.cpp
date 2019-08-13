#include <iostream>
using namespace std;
int main()
{
    cout << endl << "A " <<  (int) 'A' << " Z " << (int) 'Z' << " A coded " << (char) ('A' % 26 + 'A') 
    << " Z coded " << (char) ('Z' % 26 + 'A') << endl;

    return 0;
}