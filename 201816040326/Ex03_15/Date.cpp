#include <iostream>
#include<string>
#include"Date.h"
using namespace std;

Date::Date(int month,int day,int year)
{
    setmonth(month);
    setday(day);
    setyear(year);
}

void Date::setmonth(int month)
{
    if(month<=12&&month>=1)
        Month = month;
    else
        Month = 1;
}

void Date::setday(int day)
{
    Day = day;
}

void Date::setyear(int year)
{
    Year = year;
}

int Date::getmonth()
{
    return Month;
}

int Date::getday()
{
    return Day;
}

int Date::getyear()
{
    return Year;
}

void Date::displayDate()
{
    cout<<Year<<"/"<<Month<<"/"<<Day<<endl;
}
