#include <iostream>
using namespace std;

#include "Date.h"

Date::Date(int a,int b,int c)
{
    setyear(a);
    setmonth(b);
    setday(c);
}
void Date::setyear(int a)
{
   year=a;
}
int Date::getyear() const
{
    return year;
}
void Date::setmonth(int b)//如果月份不在1~12之间，则月份赋值为1
{
   if(b>=1 && b<=12)
   {
       month=b;
   }
   else
   {
       month=1;
   }
}
int Date::getmonth() const
{
    return month;
}
void Date::setday(int c)
{
   day=c;
}
int Date::getday() const
{
    return day;
}
