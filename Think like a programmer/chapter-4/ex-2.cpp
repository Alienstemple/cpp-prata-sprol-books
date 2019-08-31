// ex-2.cpp -- связные списки
// addRecord (добавить запись в начало), averageRecord (среднее значение полей баллов структуры)
#include <iostream>
struct listNode
{
    int studentNum;
    int grade;
    listNode * next;               // указат. на след. эл-т списка
};
typedef listNode * studentCollection;
void addRecord (studentCollection & sc, int stuNum, int gr);   // ссылка на указат. чтоб менять его
double averageRecord(studentCollection sc); 
int main()
{
    studentCollection sc;
    listNode * node1 = new listNode;
    node1->studentNum = 1001;
    node1->grade = 78;
    listNode * node2 = new listNode;
    node2->studentNum = 1012;
    node2->grade = 93;
    listNode * node3 = new listNode;
    node3->studentNum = 1076;
    node3->grade = 85;
    sc = node1;
    node1->next = node2;                // указат. на след. эл-т
    node2->next = node3;
    node3->next = NULL;
    node1 = node2 = node3 = NULL;    // удаляем указат. кроме первого за ненадобностью

    addRecord(sc, 1274, 91);
    int avg = averageRecord(sc);
    std::cout << std::endl << avg << std::endl;
    return 0;
}
void addRecord (studentCollection & sc, int stuNum, int gr)
{
    listNode * newNode = new listNode;
    newNode->studentNum = stuNum;
    newNode->grade = gr;
    newNode->next = sc;               // добавл. новую запись в начало
    sc = newNode;                     // не удаляем sc, т к не копировали
}
double averageRecord(studentCollection sc)
{
    int count = 0;
    double sum = 0;
    listNode * loopPtr = sc;
    while (loopPtr != NULL)
    {
        sum += loopPtr->grade;
        count++;
        loopPtr = loopPtr->next;    // инкремент, переход к след эл-ту
    }
    double average = sum / count;
    return average;
}