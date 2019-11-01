// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;
//#define INVOIE_H
// Employee class definition
class Date
{
public://declar the three public member

    Date(int,int,int);
    void setDatemonth(int);
    void setDateday(int);
    void setDateyear(int);


    int getDatemonth();
    int getDateday();
    int getDateyear();


private:
     int Datemonth;
     int Dateday;
     int Dateyear;
     int dissplayDate1();

}; // end class date
