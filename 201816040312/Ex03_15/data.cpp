#include <iostream>
using namespace std;
#include"data.h"//nclude definition of class Data from data.h

Data::Data(int a,int b,int c)
{
    setyear(a); // initialiZes data
    setmonth(b);// initialiZes data
    setday(c);// initialiZes data
}
void Data::setyear(int a)// initialiZes year
{
    year=a;
}
int Data::getyear()
{
    return year;
}
void Data::setmonth(int b)// initialiZes month
{
    if(b>12||b<1)
        month=1;
    else
        month=b;
}
int Data::getmonth()
{
    return month;
}
void Data::setday(int c)// initialiZes day
{
    day=c;
}
int Data::getday()
{
    return day;
}
void Data::displayData()//output the data
{
    cout<<year<<"/"<<month<<"/"<<day<<endl;
}
