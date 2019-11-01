// homework1: Account.h
// Definition of Date class.

class Date
{
public:
   explicit Date(int,int,int); // constructor
   void setYear( int );
   int getYear()const;
   void setMonth( int );
   int getMonth()const;
   void setDay( int );
   int getDay()const;//defined set/get function
   void displayDate(); //out result
private:
   int Year;
   int Month;
   int Day; // data member
}; // end class Date
