#include <iostream>
using namespace std;

#include "Date.h" // Date class definition

Date::Date(int year1,int month1,int day1)
    : year( year1),
    month(month1),
    day(day1)
{
    //empty body
}

void Date::setyear(int year1)
{
    year=year1;
} // end setyear

int Date::getyear()
{
    return year;
} // end getyear

void Date::setmonth(int month1)
{
    if(month1>=1 && month1<=12)
    month=month1;
    else
    month=1;
} // end setmonth

int Date::getmonth()
{
    return month;
} //end getmonth

void Date::setday(int day1)
{
    day=day1;
} // end setday

int Date::getday()
{
    return day;
}

void Date::displaydate()
{
    cout<<"year  "<< getyear()<<endl;
    cout<<"month "<<getmonth()<<endl;
    cout<<"day   "<<getday()<<endl;
} //输出年月日
