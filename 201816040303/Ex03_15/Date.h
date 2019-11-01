#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

using namespace std;

//Create a Date class interface
class Date
{
public:
    Date(int,int,int);
    void setMonth(int);
    int getMonth();
    void setDay(int);
    int getDay();
    void setYear(int);
    int getYear();
    void displayDate();
private:
    int month;
    int day;
    int year;
};

#endif // DATE_H_INCLUDED
