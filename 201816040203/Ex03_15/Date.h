#include<string>
using namespace std;
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
    int displayDate();
private:
    int Month;
    int Day;
    int Year;

};
