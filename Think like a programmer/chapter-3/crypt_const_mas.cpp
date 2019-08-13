#include <iostream>
const char CRYPT[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 
'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int main()
{
    using namespace std;
    char ch;
    while ((ch = cin.get()) != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
            ch = CRYPT[ch % 26];
        cout << ch;
    }
    cin.get();
    return 0;
}