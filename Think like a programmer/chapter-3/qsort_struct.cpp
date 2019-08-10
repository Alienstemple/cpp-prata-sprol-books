// qsort_struct.cpp -- быстрая сортировка структуры
// -std=c++11
#include <iostream>
#include <iomanip>
using namespace std;
const int SLEN = 30;
struct student {
    char name[SLEN];
    long id;
    int grade;
};
int compare_grade(const void * voidA, const void * voidB);
int compare_id(const void * voidA, const void * voidB);
int fill(student *, int);
void show(const student *, int);
int main()
{
    cout << endl << "Enter number of stdents in group: ";
    int number;
    (cin >> number).get();
    student * Group = new student[number];
    int realsize = fill(Group, number);
    cout << endl << "realsize" << realsize;
    show(Group, realsize);
    qsort(Group, realsize, sizeof(Group[0]), compare_grade); 
    cout << endl << "After sorting by grades: \n";
    show (Group, realsize);
    cin.get();
    return 0;
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