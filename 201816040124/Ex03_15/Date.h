
class Date
{
public:
    Date(int,int,int);// constructor initializes year,month and day
    void setYear(int);// function to set the year
    int getYear();// function to retrieve the year
    void setMonth(int);// function to set the month
    int getMonth();// function to retrieve the month
    void setDay(int);// function to set the day
    int getDay();// function to retrieve the day
    void displayDate();//display the message
private:
    int Year;//data member for that year
    int Month;//data member for that month
    int Day;//data member for that day
};// end class Date

