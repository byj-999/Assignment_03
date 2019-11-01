#include "Date.h"
using namespace std;
Date::Date(int year,int month,int day)//constructor with three parameter
{
    setYear(year);
    setMonth(month);
    setDay(day);
}
void Date::setYear(int yea)// the function is to set the year's value
{
   year=yea;
}
void Date::setDay(int da)// the function is to set the day's value
{
    day=da;
}
void Date::setMonth(int mon)// the function is to set the month's value
{
    if(mon>=1&&mon<=12)
        month=mon;
    else
        month=1;
}
void Date::displayDate()// the function is to display the date
{
    cout<<"Now the Date is:"<<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<endl;
}
int Date::getDay()// the function is to get the day's value
{
    return day;
}
int Date::getYear()// the function is to get the year's value
{
    return year;
}
int Date::getMonth()// the function is to get the month's value
{
    return month;
}
