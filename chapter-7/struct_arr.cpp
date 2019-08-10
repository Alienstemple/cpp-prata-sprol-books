// trouble with input names and hobby
#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);
int main()
{
    cout << endl << "Enter class size: ";
    int class_size;
    (cin >> class_size).get();
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    cout << endl << "\t\t\tDISPLAY 1";
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
    }
    cout << endl << "\t\t\tDISPLAY 2";
    for (int i = 0; i < entered; i++)
    {
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    return 0;
}
int getinfo(student pa[], int n)
{
    int i = 0;
    while (((pa+i)->fullname != "\0") && (i < n))
    {
        cout << endl << "Enter the fullname of " << i+1 << " student: ";
        cin.getline ((pa+i)->fullname, SLEN);
        cout << endl << "Enter the hobby of " << i+1 << " student: ";
        cin.getline ((pa+i)->hobby, SLEN);
        cout << endl << "Enter the OOP level of " << i+1 << ": ";
        (cin >> (pa+i)->ooplevel).get();
        i++;
    }
    return i;
}
void display1(student st)
{
    cout << endl << "Informtion about student " << st.fullname << ": \n"
    "Hobby: " << st.hobby << "\nOOP level: " << st.ooplevel << endl;
}
void display2(const student * ps)
{
    cout << endl << "Informtion about student " << ps->fullname << ": \n"
    "Hobby: " << ps->hobby << "\nOOP level: " << ps->ooplevel << endl;
}
void display3(const student pa[], int n)
{
    cout << endl << "\t\t\tDISPLAY 3";
    for (int i = 0; i < n; i++ )
    {
        cout << endl << "Informtion about student " << (pa+i)->fullname << ": \n"
        "Hobby: " << (pa+i)->hobby << "\nOOP level: " << (pa+i)->ooplevel << endl;
    }
}