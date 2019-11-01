//Date class definition
#include <string>
using namespace std;

//Date class definition
class Date
{
public:
    Date(int, int ,int);//Declare a constructor that has one parameter for each data member
    void setMonth( int );//function to set Month
    int getMonth();//function to retrieve Month
    void setDay( int );//function to set Day
    int getDay();//function to retrieve Day
    void setYear( int );//function to set Year
    int getYear();//function to retrieve Year
    void displayDate();//function to display date
private:
    int Month;//Month for this Date
    int Day;//Day for this Date
    int Year;//Year for this  Date
};//end class Date
