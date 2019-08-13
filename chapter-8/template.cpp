// template.cpp -- шаблонная функция, возвр. наибольший элт-т массива и ее специализация для массива строк
#include <iostream>
using std::cout;
using std::endl;
template<typename T>
T maxn(const T * arr, int num);
template<>  char * maxn<char *> (const char **arr, int num);
int main()
{
    return 0;
}