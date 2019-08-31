// substring.cpp -- выводит подстроку, работа с динам памятью
#include <iostream>
typedef char * arrayString;
arrayString substring(arrayString s, int start, int num);
void substring_tester();
int length(arrayString s);
int main()
{
    substring_tester();
    return 0;
}
arrayString substring(arrayString s, int start, int num)
{
    arrayString news = new char[num];
    int l = length(s);
    if (start > l || num == 0)              // предотвращение 0 длины и выхода стартового знач
    {
        news[0] = '0';
        std::cout << std::endl << "Zero string!";
        return news;
    }
    if (start + num > l) 
        num = l - start;    // предотвращение выхода за пределы кол-ва
    int i = 0;
    for (i; i < num; i++)    // т к передаем user-friendly индекс, start-1
    {
        news[i] = s[i + start - 1];
    }
    news[num] = '\0';
    return news;
}
void substring_tester()
{
    arrayString str = new char[8];
    str[0] = 'a'; str[1] = 'b'; str[2] = 'c'; str[3] = 'd'; str[4] = 'e';
    str[5] = 'f'; str[6] = 'g'; str[7] = 'h'; str[8] = '\0';
    arrayString substr = substring(str, 3, 4);
    std::cout << std::endl << substr;     // нормальный ход
    substr = substring(str, 9, 4);
    std::cout << std::endl << substr;     // превышен начальн симв
    substr = substring(str, 3, 8);
    std::cout << std::endl << substr;     // превышено кол-во симв
    substr = substring(str, 3, 0);
    std::cout << std::endl << substr;     // нулевая подстрока 
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