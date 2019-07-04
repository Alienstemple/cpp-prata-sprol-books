//latitude.cpp - преобразует широту в градусах, минутах и секундах в градусы
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    const int m_per_degree = 60;
    const int s_per_minute = 60;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    int degree, minute, second;
    cout << endl << "Введите широту в градусах, минутах и секундах. \nСначала градусы: _";
    cin >> degree;
    cout << "\n Затем минуты: _";
    cin >> minute;
    cout << "\n Наконец, секунды: _";
    cin >> second;
    cout << endl;

//    degree = float (degree);
//    minute = float (minute);
//    second = float (second);
    float fdegree = float(degree) + float(minute) / m_per_degree + float(second) / (m_per_degree * s_per_minute);
    cout << "Вот и результат: " << fdegree << endl;
    cin.get();
    return 0;
}
