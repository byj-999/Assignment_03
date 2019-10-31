#include <iostream>
using namespace std;

#include"Date.h"

    Date::Date(int month,int day,int year)//初始化月日年
    {
        setDateDay(day);
        setDateMonth(month);
        setDateYear(year);
    }
    void Date::setDateYear(int year)//设置年
    {
        dateYear=year;
    }
    int Date::getDateYear()//读取年
    {
        return dateYear;
    }
    void Date::setDateMonth(int month)//设置月
    {
        if(month>=1&&month<=12)
            dateMonth=month;
        else
            dateMonth=1;
    }
    int Date::getDateMonth()//读取月
    {
        return dateMonth;
    }
    void Date::setDateDay(int day)//设置日
    {
        dateDay=day;
    }
    int Date::getDateDay()//读取日
    {
        return dateDay;
    }
    void Date::displayDate()//打印年月日
    {
        cout<<dateMonth<<"/"<<dateDay<<"/"<<dateYear<<endl;
    }
