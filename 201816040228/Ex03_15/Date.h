#include <string> // program uses C++ standard string class
using namespace std;

// Date class definition
class Date
{
public:

   Date( int, int, int );// constructor initializes number deprice month day and year

   void setMonth( int );
   int getMonth();

   void setDay( int );
   int getDay();

   void setYear( int );
   int getYear();

   void displayDate();

   private:
    int Month;
    int Day;
    int Year;
}; // end class Date

