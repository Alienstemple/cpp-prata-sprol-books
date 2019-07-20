// str_rts.cpp -- обращает строку
#include <iostream>
#include <string>

int main()
{
    //using namespace std;
    setlocale(LC_ALL, "RUS");
    std::string str;
    char ch;
    std::cout << std::endl << "Введите строку: ";
    std::getline(std::cin, str);

    int i, j;
    for (i = 0, j = str.size()-1; i<j; ++i, --j)
    {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }

    std::cout << std::endl<< str << std::endl;
    std::cin.get();
    return 0;
}
