#include <iostream>
using namespace std;

#include "Date.h" // Date class definition


Date::Date(int ye,int mon,int da)
{
    setdateyear(ye);
    setdatemonth(mon);
    setdateday(da);
}//Define the constructor. Assign each parameter value to the appropriate data member.
void Date::setdateyear(int year)//Define a set function for the date's year data member.
{
    dateyear=year;
}
int Date::getdateyear()//Define a get function for the date's year data member
{
    return dateyear;
}
void Date::setdatemonth(int month)//Define a set function for the date's month data member
{
    if(month<1||month>12)
    {
        month==1;
        datemonth=month;
    }
    if(month>=1&&month<=12)
    {
        datemonth=month;
    }
}
int Date::getdatemonth()//Define a get function for the date's month data member
{
    return datemonth;
}
void Date::setdateday(int day)//Define a set function for the date's day data member
{
    dateday=day;
}
int Date::getdateday()//Define a get function for the date's day data member
{
    return dateday;
}
void Date::displaydate()//Define a output function for the date's year,month and day data member
{
    cout << "The date is:" << getdateyear() << "/" <<getdatemonth() << "/" <<getdateday()<<endl;
}
