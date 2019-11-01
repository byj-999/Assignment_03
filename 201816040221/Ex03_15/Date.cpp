// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Date.h"
using namespace std;
Date::Date(int month,int day,int year)//declare three date members
{
    setDatemonth(month);
    setDateday(day);
    setDateyear(year);

}
void Date::setDatemonth(int month)//declar the month member
{
    if(month<1||month>12)
    {
        Datemonth=1;
    }
    else
    {


    Datemonth=month;
    }
}
int Date::getDatemonth()
{

    return Datemonth;
}
void Date::setDateday(int day)//declar the day member
{

    Dateday=day;
}
int Date::getDateday()
{
    return Dateday;
}
void Date::setDateyear(int year)
{
    Dateyear=year;
}
int Date::getDateyear()
{
    return Dateyear;
}


