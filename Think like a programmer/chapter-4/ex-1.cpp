// ex-1.cpp -- операции со строками переменной длины
// append (стр + символ), concatenate (стр1 + стр2), characterAt (символ по индексу)
#include <iostream>
typedef char * arrayString;
char characterAt(arrayString s, int position);     // указаель на строку и позиция
void append(arrayString & s, char c);                       // ссылка на указатель чтоб менять его
void concatenate(arrayString & s1, arrayString s2);
int length(arrayString s);
int main()
{
    return 0;
}
char characterAt(arrayString s, int position)
{
    return s[position];
}
void append(arrayString & s, char c)
{
    int oldLength = length(s);
    arrayString newS = new char[oldLength + 2];    // добав. символ и \0
    for (int i = 0; i < oldLength; i++)
    {
        newS[i] = s[i];                           // копируем исх строку (присв адес)
    }
    newS[oldLength] = c;
    newS[oldLength + 1] = 0;
    delete[] s;                                   // исх указат ни на что не указ
    s = newS;                                     // указывает на новую строку
    // newS удалится при выходе из ф-и
}
void concatenate(arrayString & s1, arrayString s2)
{
    int s1_oldLength = length(s1);
    int s2_Length = length(s2);
    int s1_newLength = s1_oldLength + s2_Length;
    arrayString newS = new char[s1_newLength + 1];
    for (int i = 0; i < s1_oldLength; i++)
    {
        newS[i] = s1[i];                    // копируем s1
    }
    for (int i = 0; i < s2_Length; i++)
    {
        newS[s1_oldLength + i] = s2[i];
    }
    newS[s1_newLength] = 0;
    delete[] s1;
    s1 = newS;
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