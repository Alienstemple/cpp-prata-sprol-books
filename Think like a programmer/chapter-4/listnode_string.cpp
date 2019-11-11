// listnode_string.cpp -- массив символов в виде связного списка
#include <iostream>
typedef string_node * String;
struct string_node
{
    char s;
    int count;
    string_node * next;
};
char characterAt(String str, int n);
int main()
{
    String str = new string_node;
    str
    return 0;
}
char characterAt(String str, int n)
{
    String looPtr = str;
    while (looPtr != NULL)
    {
        looPtr = looPtr->next;
    }
}