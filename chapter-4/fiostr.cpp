// fiostr.cpp -- отображает фамилию и имя с использованием string объектов
 #include <iostream>
 #include <cstring>
#include <string>
 
 int main()
 {
     using namespace std;
     setlocale(LC_ALL, "RUS");
     string name, sname, output;
     cout << endl << "Введите имя: ";
     getline(cin, name);
     cout << endl << "Введите фамилию: ";
     getline(cin, sname);
 
     output = sname + ", " + name;
 
     cout << endl << "Ваша информация: " << output;
     cin.get();
     return 0;
 }

