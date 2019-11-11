//teory_recursive.cpp -- простые примеры рекурсии
/*
    Обязательны условный (по if) return и декремент основного значения с передачей нижней ф-и

    Головная (сначала по цепочке передаем управление нижним ф-ям, при выходе из них выполняем вычисления)
    и хвостовая (сначала считаем, затем передаем рез-т нижней ф-и, затем по цепочке из них выходим)
    рекурсии.

    БРИ - большая рекурсивная идея:
    1 - пишем итеративную ф-ю
    2 - создаем диспетчера итеративной ф-и, который работает с самым малым случаем (n=0) 
        и со случаем n-1 (вызывает итеративный метод)
    3 - делаем из диспетчера итеративную ф-ю

    Хвостовая рекурсия может заставить передавать след ф-и слишком много параметров.
    Во избежание этого выбираем параметры как для итеративной ф-и

    Для предотвращения необходимости глобальных переменных делаем хвостовую рекурсию и
    помещаем в return, перед этим инкрементируя, перем, которую надо сохранить

*/
#include <iostream>
using namespace std;
struct ListNode                      // связный список
{
    int data;
    ListNode * next;
};
typedef ListNode * ListPtr;
struct BinaryTree                 // двоичное дерево, ссылки на левое и правое поддеревья
{
    int data;
    BinaryTree * left;
    BinaryTree * right;
};
typedef BinaryTree * BinTrxfce4-poPtr;
int countNegative(ListPtr head);
int factorial(int n)
{
    if (n==0) return 1;
    else
    return n * factorial(n-1);
}
int sum_array(int * mas, int size)
{
    if (size-1 == 0) return mas[size-1];
    else return mas[size-1] + sum_array(mas, size-1);
}
int main(int argc, char *argv[])
{
    const int SIZE = 5;
    cout << endl << "5! = " << factorial(5);
    int massiv[SIZE] = {1, 1, 1, 1, 1};
    cout << endl << "Sum of 1+1+1+1+1 = " << sum_array(massiv, SIZE);

    ListPtr OurList;
    ListNode * node1 = new ListNode;
    node1->data = -1;
    ListNode * node2 = new ListNode;
    node2->data = 2;
    ListNode * node3 = new ListNode;
    node3->data = -3;
    OurList = node1;         // присваиваем голову списка основному указателю
    node1->next = node2;
    node2->next = node3;
    node1 = node2 = node3 = NULL;
    cout << endl << "Amount of negative values in list -1 2 -3: " << countNegative(OurList) << endl;
    return 0;
}
int countNegative(ListPtr head)             // подсчет отриц эл-тов в связном списке
{
    if (head == NULL) return 0;                       // вырожденный случай, голова = 0
    int negativeAmount = countNegative(head->next);
    if (head->data < 0) negativeAmount++;
    return negativeAmount;
}