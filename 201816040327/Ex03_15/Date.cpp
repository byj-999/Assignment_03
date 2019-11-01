#include <iostream>
#include "Date.h"
#include <string>

using namespace std;

Date::Date(int mon , int day , int year)
{
    setday0(day) ;
    setmon0(mon) ;
    setyear0(year) ;
}
//three set functions
void Date::setmon0(int mon)
{
    if (mon > 0 && mon < 13)
        mon0 = mon;
    else
        {
            cout << "error month!!" << endl;
            mon0 = 0;
        }
}//month function

void Date::setday0(int day)
{
    day0 = day;
}//day function

void Date::setyear0(int year)
{
    year0 = year ;
}//year function

//three return
int Date::getmon0()
{
    return mon0 ;
}//month return

int Date::getday0()
{
    return day0;
}//day return

int Date::getyear0()
{
    return year0 ;
}//year return

//display all
void Date::DisplayDate()
{
    cout << getmon0() << endl;
    cout << "." << endl;
    cout << getday0() << endl;
    cout << "." << endl;
    cout << getyear0() << endl;

}//the end
