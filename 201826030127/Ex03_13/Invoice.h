#include<iostream>
using namespace std;
#include<string>

//Invoice Class dwefinition
class Invoice
{
public:
    explicit Invoice(string,string,int=0,int=0);//constructor initialize member
    void setnumber(string);//sets the number 
    void setexplain(string);//sets the explain
    void setmuch(int);//sets the much
    void setmoney(int);//sets the money

    string getnumber() const;//gets the number
    string getexplain()  const;//gets the explain
    int getmuch()  const;//gets the much
    int getmoney()  const;//gets the money
     int  getInvoiceAmount()  const;//display the amount


private:
    string number;
    string explain;
    int much;
    int money;

};//end class Invoice
