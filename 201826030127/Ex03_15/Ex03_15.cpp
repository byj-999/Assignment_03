#include"Data.h"
#include<iostream>
int main()
{
    int n1,n2,n3;

    //constructor initialize data member with arguments
    Data data(2001,01,28);
    data.displaydata();//display data member

    //initialize year with another arguments 
    cin>>n1;
    data.setyear(n1);//set year
    data.getyear();//get year

    //initialize month with another arguments
    cin>>n2;
    data.setmonth(n1);//set month
    data.getmonth();//get month

    //initialize day with another argument
     cin>>n3;
    data.setday(n3);
    data.getday();

    //again display data
    data.displaydata();

}//end main
