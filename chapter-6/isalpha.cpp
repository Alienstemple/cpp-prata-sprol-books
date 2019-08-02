// isalpha.cpp -- определяет, сколько во входном потоке слов, начинающихся с гласных, согл и др
#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    cout << endl << "Enter words, q to stop:\n";
    char ch;
    int count_vow = 0, count_cons = 0, count_oth = 0;
    if ((ch = cin.get()) != 'q') 
        goto l;
    while ((ch = cin.get()) != 'q')
    {
        if (ch == ' ')
        {
            cin.get(ch);
            l: {if (!isalpha(ch))
                count_oth++;
            else 
                switch (ch)
                {
                    case 'a':
                    case 'A':
                    case 'e':
                    case 'E':
                    case 'i':
                    case 'I':
                    case 'o':
                    case 'O':
                    case 'u':
                    case 'U':
                    case 'y':
                    case 'Y': count_vow++;
                    break;
                    default:
                        count_cons++;
                }
               }
        }
        continue;
    }
    cout << endl << "Vowels" << "\t" << "Consonants" << "\t" << "Others";
    cout << endl << count_vow << "\t"<< count_cons << "\t\t" << count_oth << endl;
    cin.get();
    return 0;
}
