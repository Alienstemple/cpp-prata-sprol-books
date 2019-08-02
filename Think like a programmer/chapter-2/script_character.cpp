// script_character.cpp -- дешифруем сообщение, определяем режим декодирования:
// → UPPER → LOWER → PUNCTUATION →
#include <iostream>
int main()
{
    using namespace std;
    cout << endl << "Enter numbers, divided by \",\": ";

    char ch;
    int number;
    char letter;
    enum Code_Mode {UPPER, LOWER, PUNCT};
    Code_Mode mode = UPPER;

    while ((ch=cin.get()) != '\n')
    {
        
        number = ch - '0';
        cin.get(ch);
        while ((ch != '\n') && (ch != ','))
        {
            number = number * 10 + ch - '0';
            ch = cin.get();
        }

        switch(mode)
        {
            case UPPER:
                letter = number % 27 + 'A' - 1;
                if (number % 27 == 0)
                {
                    mode = LOWER;
                    continue;
                }
            break;
            case LOWER:
                letter = number % 27 + 'a' - 1;
                if (number % 27 == 0)
                {
                    mode = PUNCT;
                    continue;
                }
            break;
            case PUNCT:
                switch (number % 9)
                {
                    case 1:
                        letter = '!';
                    break;
                    case 2:
                        letter = '?';
                    break;
                    case 3:
                        letter = ',';
                    break;
                    case 4:
                        letter = '.';
                    break;
                    case 5:
                        letter = ' ';
                    break;
                    case 6:
                        letter = ';';
                    break;
                    case 7:
                        letter = '"';
                    break;
                    case 8:
                        letter = '\'';
                    break;
                }
                if (number % 9 == 0)
                {
                    mode = UPPER;
                    continue;
                }
            break;
        }
        cout << letter;
    } 
    cout << endl;
    cin.get();
    return 0;
}
