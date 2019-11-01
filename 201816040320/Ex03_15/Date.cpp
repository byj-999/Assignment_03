#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int z, int r, int y)
{
    setMonth(z);
    setDay(r);
    setYear(y);
}
//构造函数
void Date::setMonth(int n)
{
    if(1<=n&&n<=12)
        Month=n;
    else
        Month=1;
}
//设置月份
int Date::getMonth()
{
    return Month;
}
//获取月份
void Date::setDay(int n)
{
    Day=n;
}
//设置天
int Date::getDay()
{
    return Day;
}
//获取天
void Date::setYear(int n)
{
    Year=n;
}
//设置年份
int Date::getYear()
{
    return Year;
}
//获取年份
void Date::displayDate()
{
    cout <<getMonth()<<"/"<<getDay()<<"/"<<getYear()<<endl;
}
//显示日期
