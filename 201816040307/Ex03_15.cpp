#include <iostream>

using namespace std;

class Date
{
private:
    int mouth;//define mouth
    int day;//define day
    int year;//define year
public:
    //constructor initializes year day mouth
    explicit Date(int year1, int mouth1, int day1)
    {
        day = day1;
        year = year1;
        //if mouth is legal
        if(mouth1 <= 12 && mouth1 >= 1)
            mouth = mouth1;
        //if not set it to 1
        else
            mouth = 1;
    }

    //function to set year
    void setYear(int yyear)
    {
        year = yyear;//store the yyear in year
    }//end function setYear

    //function to set day
    void setDay(int dday)
    {
        day = dday;//store the dday in day
    }//end function setDay

    //function to set mouth
    void setMouth(int mouth1)
    {
        //if mouth is legal
        if(mouth1 <= 12 && mouth1 >= 1)
            mouth = mouth1;
        //if not set it to 1
        else
            mouth = 1;
    }//end function setMouth

    //function get the year
    int getYear() const
    {
        return year;//return year
    }//end function getYear

    //function get the day
    int getDay() const
    {
        return day;//return day
    }//end function getDay

    //function get the mouth
    int getMouth() const
    {
        return mouth;//return mouth
    }//end function getMouth

    //function to display the date
    void displayDate() const
    {
        cout<<getMouth()<<"/"<<getDay()<<"/"<<getYear()<<endl;//display
    }
};
int main()
{
    //create one Date object and initializes it
    Date date1(2016, 3, 12);

    //display date11's info
    date1.displayDate();

    //set the mouth to 45
    cout<<"Set the mouth to 45"<<endl;
    date1.setMouth(45);

    //display new date1's info
    cout<<"The new info of date1:"<<endl;
    date1.displayDate();
}//end main
