using namespace std;

class Date
{
public:
    explicit Date(int,int,int);//构造函数
    void setYear(int);//set the year
    int getYear();//get the year
    void setMonth(int);//set the month
    int getMonth();//get the month
    void setDay(int);//set the day
    int getDay();//get the day
    void displayDate(int,int,int);
private:
    int year;
    int month;
    int day;

};//end of class
