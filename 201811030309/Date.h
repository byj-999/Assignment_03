

class Date
{
public:

    // create the constructor
    Date(int, int, int);

    //set 3 functions to initialize 3 dates;
    void setmonth(int cmonth);
    void setday(int cday);
    void setyear(int cyear);

    //return 3 dates;
    int getmonth() const;
    int getday() const;
    int getyear() const;
    void displayDate();

    //create 3 data members
private:
    int month;
    int day;
    int year;
};
