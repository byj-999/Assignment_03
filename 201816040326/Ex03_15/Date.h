#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED
#include <iostream>
#include<string>
using namespace std;


#endif // DATE_H_INCLUDED
class Date
{
public:
    Date(int,int,int);
    void setmonth(int);
    void setday(int);
    void setyear(int);
    int getmonth();
    int getday();
    int getyear();
    void displayDate();
private:
    int Month;
    int Day;
    int Year;
};
