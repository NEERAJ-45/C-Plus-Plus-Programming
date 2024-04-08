#include <iostream>
using namespace std;

class Date
{
private:
    int day, month, year;

public:
    Date();
    Date(int Day, int Month, int Year);
    int getDay();
    int getMonth();
    int getYear();
};

Date::Date()
{
    day = month = year = 0;
}

Date::Date(int Day, int Month, int Year)
{
    day = Day;
    month = Month;
    year = Year;
}

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

int main()
{
    Date d1;
    cout << "Default Constructor\nDate: " << d1.getDay() << "/" << d1.getMonth() << "/" << d1.getYear();

    Date d2(4, 1, 2004);
    cout << "\nParameterized Constructor\nDate: " << d2.getDay() << "/" << d2.getMonth() << "/" << d2.getYear();
    return 0;
}
