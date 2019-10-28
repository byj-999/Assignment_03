#include <string> // program uses C++ standard string class
using namespace std;

// Date class definition
class Date
{
  public:
    Date(int,int,int);//Declare a constructor that has one parameter for each data member
    void setdateyear(int);//Declare a set method for the date's year
    int  getdateyear();//Declare a get method for the date's year
    void setdatemonth(int);//Declare a set method for the date's month
    int  getdatemonth();//Declare a get method for the date's month
    void setdateday(int);//Declare a set method for the date's day
    int  getdateday();//Declare a get method for the date's day
    void displaydate();//Declare a output method for the date's year,month and day
  private:
    int dateyear;//Declare a int data member for the date's year
    int datemonth;//Declare a int data member for the date's month
    int dateday;//Declare a int data member for the date's day
};
