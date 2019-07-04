//days_hours.cpp - преобразует секунды в дни, часы, минуты и секунды.
#include <iostream>
using namespace std;
int main()
{
    setlocale (LC_ALL, "RUS");
    const char h_per_day = 24;
    const char m_per_hour = 60;
    const char s_per_minute = 60;
    long long lseconds;
    cout << "Введите количество секунд: ";
    cin >> lseconds;
    cout << endl;

    long days = lseconds / (h_per_day * m_per_hour * s_per_minute);
    long hours = (lseconds % (h_per_day * m_per_hour * s_per_minute)) / (m_per_hour * s_per_minute);
    long minutes = ((lseconds % (h_per_day * m_per_hour * s_per_minute)) % (m_per_hour * s_per_minute)) / s_per_minute;
    long seconds = ((lseconds % (h_per_day * m_per_hour * s_per_minute)) % (m_per_hour * s_per_minute)) % s_per_minute;

    cout << lseconds << " секунд = " << days << " дней, " << hours << " часов, " << minutes << " минут, " << seconds << " секунд. " << endl;
    cin.get();
    return 0;
}
