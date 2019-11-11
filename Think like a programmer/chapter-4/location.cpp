// location.cpp -- 0 эл-т массива - кол-во эл-тов в массиве, далее символы. 0 байт не нужен
// append (стр + символ), concatenate (стр1 + стр2), characterAt (символ по индексу)
#include <iostream>
typedef char * arrayString;
char characterAt(arrayString s, int position);     // указаель на строку и позиция
void append(arrayString & s, char c);                       // ссылка на указатель чтоб менять его
void concatenate(arrayString & s1, arrayString s2);
void output(const arrayString s);
int length(arrayString s);
int main()
{
    arrayString location = new char[8];
    location[0] = 7; location[1] = 'a'; location[2] = 'b'; location[3] = 'c'; location[4] = 'd';
    location[5] = 'e'; location[6] = 'f'; location[7] = 'g';
    std::cout << std::endl << "Our source string: ";
    output(location);
    char pos = characterAt(location, 4);             //d
    std::cout << std::endl << "At 4 is " << pos;
    char app = 'h';
    append(location, app);
    std::cout << std::endl << "With h: ";
    output(location);
    arrayString concat = new char[3];
    concat[0] = 2; concat[1] = 'p'; concat[2] = 'q';
    concatenate(location, concat);
    std::cout << std::endl << "With pq: ";
    output(location);
    return 0;
}
char characterAt(arrayString s, int position)
{
    return s[position];                     // т.к. 0 занят кол-вом
}
void append(arrayString & s, char c)
{
    arrayString newS = new char[(int) s[0] + 2];    // добав. символ
    newS[0] = s[0] + 1;                                // инкрементируем кол-во
    for (int i = 1; i < (int) s[0] + 1; i++)
    {
        newS[i] = s[i];                           // копируем исх строку (присв адес)
    }
    newS[(int) s[0] + 1] = c;
    delete[] s;                                   // исх указат ни на что не указ
    s = newS;                                     // указывает на новую строку
    // newS удалится при выходе из ф-и
}
void concatenate(arrayString & s1, arrayString s2)
{
    //int s1_oldLength = length(s1);
    //int s2_Length = length(s2);
    //int s1_newLength = s1_oldLength + s2_Length;
    arrayString newS = new char[(int) s1[0] + (int) s2[0] + 1];
    newS[0] = s1[0] + s2[0];
    for (int i = 1; i < (int) s1[0] + 1; i++)
    {
        newS[i] = s1[i];                    // копируем s1
    }
    for (int i = 1; i < (int) s2[0] + 1; i++)
    {
        newS[(int) s1[0] + i] = s2[i];
    }
    delete[] s1;
    s1 = newS;
}
void output(const arrayString s)
{
    std::cout << std::endl;
    int size = (int) s[0];
    for (int i = 1; i < size + 1; i++)
        std::cout << s[i];
    std::cout << std::endl;
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