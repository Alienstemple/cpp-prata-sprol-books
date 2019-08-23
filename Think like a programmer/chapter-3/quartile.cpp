// qartile.cpp -- из выборки оценок найти такие, какие нужно получить, 
// чтоб успевать так же или лучше, чем 25%, 50% и 75% учеников
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
const int SLEN = 30;
struct student {
    char name[SLEN];
    long id;
    int grade;
};
int compare_grade(const void * voidA, const void * voidB);
int division(int start, int end);
int fill(student * group, int num);
void show(const student * group, int num);
int main()
{
    cout << endl << "Enter number of stdents in group: ";
    int number;
    (cin >> number).get();
    student * Group = new student[number];
    int realsize = fill(Group, number);
    qsort(Group, realsize, sizeof(Group[0]), compare_grade); 
    cout << endl << "After sorting by grades: \n";
    show (Group, realsize);

    int half_ind = division(0, realsize);             // делим пополам массив чисел, рекурсивно делим 2 половины
    int first_quart_ind = division(half_ind, realsize);      // в силу сортировки в обратном порядке меняем переменные
    int second_quart_ind = division(0, half_ind);

    cout << endl << "Mark like 25% (" << first_quart_ind << ") = " << Group[first_quart_ind].grade << endl 
    << "Mark like 50% (" << half_ind << ") = " << Group[half_ind].grade << endl
    << "Mark like 75% (" << second_quart_ind << ") = " << Group[second_quart_ind].grade << endl;
    cout << endl;
    return 0;
}
int division(int start, int end)
{
    return (start + (end - start) / 2);
}
int compare_grade(const void * A, const void * B)
{
    student * sA = (student *) A;
    student * sB = (student *) B;
    return (((sA)->grade) < ((sB)->grade));
}
int fill(student * group, int num)
{
    cout << endl << "Enter information about students in group."
    "\nTo stop, enter \"\" instead of student name." << endl;
    int i = 0;
    while (i < num)
    {
        cout << endl << "Enter name #" << i+1 << ": ";
        cin.getline(group[i].name, SLEN);
        if (group[i].name == "")       // ???
        {
            i+1;
            break;
        }
        cout << endl << "Enter student #" << i+1 << " id: ";
        cin >> group[i].id;
        cout << endl << "Enter student #" << i+1 << " grade: ";
        (cin >> group[i].grade).get();
        i++;
    } 
    return i;
}
void show(const student * group, int num)
{
    cout << endl << "+";
    for (int i = 0; i < 42; i++)
        cout << "_";
    cout << "+";
    cout << endl << "|"<< setw(15) << "NAME" << "|" << setw(15) << "ID" << "|" << setw(10) << "GRADE" << "|";
    cout << endl << "+";
    for (int i = 0; i < 42; i++)
        cout << "_";
    cout << "+";
    for (int i = 0; i < num; i++)
        cout << endl << "|" << setw(15) << group[i].name << "|"<< setw(15) << group[i].id 
        << "|"<< setw(10) << group[i].grade << "|";
    cout << endl << "+";
    for (int i = 0; i < 42; i++)
        cout << "_";
    cout << "+";
    cout << endl;
}