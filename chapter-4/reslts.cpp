// results.cpp -- работа с классом array
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array <float, 4> result;
    for (int i = 0; i<3; i++)
    {
        cout << endl << "Enter the result of cross number " << i+1 << ": ";
        cin >> result[i];
    }
    result[3] = (result[0] + result[1] + result[2])/3;
    for (int i = 0; i<4; i++)
    {
        cout << endl << result[i];
    }
    cout << endl;
    cin.get();
    return 0;
}
