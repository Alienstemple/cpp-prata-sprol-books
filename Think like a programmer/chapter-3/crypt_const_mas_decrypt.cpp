#include <iostream>
#include <string>
const char CRYPT[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 
'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int main()
{
    using namespace std;
    cout << endl << "Enter string: " << endl;
    char ch;
    string str;
    int i = 0;
    while ((ch = cin.get()) != '\n')
    {
        if (ch >= 'A' && ch <= 'Z')
            ch = CRYPT[ch % 26];
        str[i] = ch;
        cout << ch;
        i++;
    }
    cout << endl << "Your string: " << endl;
     for (int j = 0; j < i; j++)
    {
        int num;
        if ((str[j] >= 'A') && (str[j] < 'N'))
        {
            str[j] = str[j] - 'A' + char (3 * 26); 
            cout << str[j];
        }
        else if (str[j] >= 'N')
        {
            str[j] = str[j] - 'A' + char (2 * 26);
            cout << str[j];
        }
        else
            cout << str[j]; 
    }
    cin.get();
    return 0;
}