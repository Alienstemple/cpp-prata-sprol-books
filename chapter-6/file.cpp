// file.cpp -- считает число символов в файле file.txt
#include <iostream>
#include <fstream>
int main()
{
    using namespace std;
    int count = 0;
    char ch;
    ifstream Input;
    Input.open("file.txt");
    while (!Input.eof())
    {
        Input.get(ch);
        count++;
    }
    Input.close();
    cout << endl << count << " symbols in file.txt\n";
    cin.get();
    return 0;
}
