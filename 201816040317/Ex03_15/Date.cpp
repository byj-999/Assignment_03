#include"Date.h"
#include<stdexcept>
#include<iomanip>
#include<iostream>
using namespace std;

Date::Date(int year,int month,int day)
{
    setYear(year);
    setMonth(month);
    setDay(day);
}

void Date::setYear(int date)
{
    year=date;
}
//end the function setYear

int Date::getYear()
{
    return year;
}
//end the function getYear
void Date::setMonth(int m)
{
    month=m;
}
//end the function setMonth
int Date::getMonth()
{
    return month;
}
//end the function getMonth
void Date::setDay(int d)
{
    day=d;
}
//end the function setDay
int Date::getDay()
{
    return day;
}
    //end the function getDay
void Date::displayDate(int a,int b,int c)
{
    if(b<1||b>12)
    {
        b=1;
    }
    cout<<a<<"/"<<b<<"/"<<c<<endl;
}
//end the function displayDate
