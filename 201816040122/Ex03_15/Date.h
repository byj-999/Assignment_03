#include  <string>
using namespace std;
//create a Date project
class Date
{
 public:
    explicit Date(int=0,int=0,int=0);//initialize date numbers
    void setDate(int,int,int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    int getMonth()const;
    int getDay()const;
    int getYear()const;
    void displayDate();
 private:
    int month;
    int day;
    int year;
};
