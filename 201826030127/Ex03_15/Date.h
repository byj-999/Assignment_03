#include<iostream>
using namespace std;

//Data class definition
class Data
{
public:
    Data(int,int,int);//constructor initialized data member
    void setyear(int);//sets the year
    void setmonth(int);//sets the month
    void setday(int);//sets the day
    void displaydata() const;//dieplay the message

    int getyear() const;//gets the year
    int getmonth() const;//gets the month
    int getday() const;//gets the day

private:
    int year;
    int month;
    int day;

};//end class Data

