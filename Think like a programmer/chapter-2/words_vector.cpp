// words_light.cpp -- анализирует слова в строке, words без вектора
#include <iostream>
#include <vector>
int main()
{
    using namespace std;
    cout << endl << "Enter the string: " << endl;
    vector<char> string;
    string.reserve(30);
    char ch;
    int word_amont(0);
    while ((ch = cin.get()) != '\n')
    {
        string.push_back(ch);
        if (ch == ' ')
            word_amont++;
    }
    word_amont++;             // добавляем к кол-ву последнее слово
    
    int max_length(0);
    int max_vow(0);
    int i = 0;
    while (i < string.size())
    {
        int length(0);
        int vow(0);
        while (string[i] != ' ' && i < string.size())
        {
            length++;
            switch(string[i])
            {
                case 'a':
                case 'o':
                case 'e':
                case 'i':
                case 'u':
                    vow++;
            }
            i++;
        }
        if (length > max_length)
            max_length = length;
        if (vow > max_vow)
            max_vow = vow;
        i++;          // перескочить через пробел
    }
    cout << endl << "Number of words: " << word_amont
    << "\nMaximal length of the word: " << max_length
    << "\nMaximum vowels in the word: " << max_vow << endl;
    cin.get();
    return 0;
}