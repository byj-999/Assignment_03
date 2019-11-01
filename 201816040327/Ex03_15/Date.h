#include <iostream>
#include "Date.h"
#include <string>

using namespace std;

class Date
{
public:
    Date(int mon , int day , int year);

    //three functions
    void setmon0(int);
    void setday0(int);
    void setyear0(int);

    //three returns
    int getmon0();
    int getday0();
    int getyear0();

    //display
    void DisplayDate();

private:
    //three privated date
    int mon0 ;
    int day0 ;
    int year0 ;
};
//the end
