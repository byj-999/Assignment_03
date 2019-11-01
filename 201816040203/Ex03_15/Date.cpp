#include <iostream>
#include<iomanip>

using namespace std;
#include"Date.h"//创建一个名为Date的类
Date::Date(int m,int d,int y)
{
    setMonth(m);setDay(d);setYear(y);
}
void Date::setMonth(int m)
{
    if(m>12||m<1)
        Month=1;
    else
    Month=m;
}
int Date::getMonth()
{
    return Month;
}
void Date::setDay(int d)
{
        Day=d;
}
int Date::getDay()
{
    return Day;
}
void Date::setYear(int y)
{
    Year=y;
}
int Date::getYear()
{
    return Year;
}
int Date::displayDate()
{
    cout<<Month<<"/"<<Day<<"/"<<Year<<endl;
}
