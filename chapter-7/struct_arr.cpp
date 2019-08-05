#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
char fullname[SLEN];
char hobby[SLEN];
int ooplevel;
};
// getinfo() принимает два аргумента: указатель на первый элемент
// массива структур student и значение int, представляющее
// количество элементов в массиве. Функция запрашивает и
// сохраняет данные о студентах. Ввод прекращается либо после
// наполнения массива, либо при вводе пустой строки в качестве
// имени студента. Функция возвращает действительное количество
//введенных элементов.
int getinfо(student pa[], int n);
// display]. () принимает в качестве аргумента структуру student
// и отображает ее содержимое.
void displayl(student st);
// display2() принимает адрес структуры student в качестве аргумента
// и отображает ее содержимое,
void display2(const student * ps) ;
// display3() принимает указатель на первый элемента массива
// структур student и количество элементов в этом массиве и
// отображает содержимое всех структур в массиве,
void display3(const student pa[], int n) ;
int main ()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfо (ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        displayl (ptr_stu [i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}
int getinfо(student pa[], int n)
{
    int i = 0;
    while (((pa+i)->fullname != "") && (i < n))
    {
        cout << endl << "Enter the fullname of" << i+1 << "student: ";
        cin >> (pa+i)->fullname;
        cout << endl << "Enter the hobby of " << i+1 << "student: ";
        cin >> (pa+i)->hobby;
        cin.get();
        cout << endl << "Enter the OOP level of " << i+1 << "student: ";
        cin >> (pa+i)->ooplevel;
        i++;
    }
    return i;
}
void displayl(student st)
{
    cout << endl << "Informtion about student " << st.fullname << ": \n"
    "Hobby: " << st.hobby << "\nOOP level: " << st.ooplevel << endl;
}
void display2(const student * ps)
{
    cout << endl << "Informtion about student " << ps->fullname << ": \n"
    "Hobby: " << ps->hobby << "\nOOP level: " << ps->ooplevel << endl;
}