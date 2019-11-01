#include"Invoice.h"//include definition of class Invoice
using namespace std;

//constructor initialize data member
Invoice::Invoice(string n,string e,int=0,int=0)
:   number(n),explain(e),much(0),money(0)
    {

    }//end  Invoice constructor

    void Invoice::setnumber(string n)
    {
        number=n;
    }//end function setnumber


    void Invoice::setexplain(string e)
    {
        explain=e;
    }//end function setexplain


    void Invoice::setmuch(int m)
    {
	if(much<0)
	much=0;
        much=m;
    }//end function setmuch


    void Invoice::setmoney(int o)
    {
	if (money<0)
	money=0;
        money=o;
    }//end function setmoney





    string Invoice::getnumber() const
    {
        return number;
    }
    string Invoice::getexplain() const
    {
        return explain;
    }
    int Invoice::getmuch() const
    {
        return much;
    }
    int Invoice::getmoney() const
    {
        return money;
    }
  int  Invoice::getInvoiceAmount() const
    {
        return money*much;
    }





