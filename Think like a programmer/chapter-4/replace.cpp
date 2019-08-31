// replace.cpp -- replace substrings in string
#include <iostream>
typedef char * arrayString;
int length(arrayString s);
void replace(arrayString & source, arrayString target, arrayString replace_text);
void replace_tester(void);
int main()
{
    replace_tester();
    return 0;
}
void replace(arrayString & source, arrayString target, arrayString replace_text)
{
    int l_s = length(source);
    int l_t = length(target);
    int l_r = length(replace_text);
    arrayString news = new char[l_s + 10];        // ??? длина может быть превышена

    int is = 0, in = 0;                    // индексы для source и news
    while (is < l_s)         // внешн. цикл, проходит по всем source
    { 
        if (source[is] != target[0])       // сравн. с 0-м эл-том target, при отсутствии совпадения 
        {
            news[in] = source[is];          // просто копируем из source в news
            is++; in++;
        }
        else
        {
            bool sbstr = true;           // булево значение, подстрока или нет
            for (int j = 1; j < l_t; j++)
            {
                if (source[is + j] == target[j])   // дальнейшее сравнение, начинаем с 1
                {
                    sbstr = true;
                }
                else                             // cлед. эл-т - уже не подстрока
                {
                    sbstr = false;
                    for (int k = 0; k < j; k++)  // копируем все предыдущее
                        news[in + k] = source[is + k];
                    is += j;                      // сделаем значения is, in актуальными
                    in += j;
                    break;                       // выход во внешний for
                }
            }
            if (sbstr)                        // если подстрока
            {
                for (int j = 0; j < l_r; j++)
                    news[in + j] = replace_text[j];   // заменяем на replase
                is += l_t;                           // актуализируем значения is, in
                in += l_r;
            }
        }
    }
    delete [] source;
    source = news;
}
void replace_tester()
{
    arrayString str = new char[8];
    str[0] = 'a'; str[1] = 'b'; str[2] = 'c'; str[3] = 'd'; str[4] = 'a';
    str[5] = 'b'; str[6] = 'a'; str[7] = 'e'; str[8] = '\0';
    std::cout << std::endl << "Our source string: \"" << str << "\"";
    arrayString targ = new char[2];
    targ[0] = 'a'; targ[1] = 'b'; targ[2] = '\0';
    arrayString repl = new char[3];
    repl[0] = 'x'; repl[1] = 'y'; repl[2] = 'z'; repl[3] = '\0';
    std::cout << std::endl << "We replace \"" << targ << "\" by \"" << repl << "\""; 
    arrayString news = new char[length(str) + 10];
    replace(str, targ, repl);
    std::cout << std::endl << "New string: \"" << str << "\"";
    //std::cout << std::endl << "Emergency ways: ";
    // нулевая строка или подстрока
}
int length(arrayString s)                       // подсчет симв исх строки
{
    int count = 0;
    while (s[count] != 0)
    {
        count++;
    }
    return count;
}