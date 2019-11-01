#include"Data.h"
using namespace std;

//constructor initialize data member
Data::Data(int y,int m,int d)
    {
        setyear(y);
        setmonth(m);
        setday(d);
    }//end Data constructor

    void Data::setyear(int y)
    {
        year=y;
    }//end setyear function

    void Data::setmonth(int m)
    {
        if(m>=1&&m<=12)
            month=m;
        else
            month=1;
    }//end setmonth function

    void Data::setday(int d)
    {
        day=d;
    }//end function setday


    int Data::getyear() const
    {
        return year;
    }//end function getyear

    int Data::getmonth() const
    {
        return month;
    }//end function getmonth

    int Data::getday() const
    {
        return day;
    }//end function getday

    void Data::displaydata() const
    {
        cout<<getyear()<<'/'<<getmonth()<<'/'<<getday()<<endl;
    }//end function displaydata



