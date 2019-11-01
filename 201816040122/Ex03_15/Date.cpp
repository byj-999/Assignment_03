#include <string>
using namespace std;
#include "Date.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>

Date::Date(int month,int day,int year)
{
    setDate(month,day,year);
}
void Date::setDate(int a,int b,int c)
{
    setMonth(a);
    setDay(b);
    setYear(c);
}
void Date::setMonth(int a)
{
   if(a<1||a>12)
      month = 1;
   else
      month = a;
}
void Date::setDay(int b)
{
    day=b;
}
void Date::setYear(int c)
{
    year=c;
}
int Date::getMonth()const
{
    return month;
}
int Date::getDay()const
{
    return day;
}
int Date::getYear()const
{
    return year;
}
void Date::displayDate()
{
    cout<<"The date is: "<<month<<"/"<<day<<"/"<<year<<endl;
}

