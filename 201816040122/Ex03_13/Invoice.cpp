
#include <string>
using namespace std;
#include "Invoice.h"

Invoice::Invoice(string partname,string name,int volume,int price)
{
    setInvoice(partname,name,volume,price);
}

void Invoice::setInvoice(string a,string b,int c,int d)
{
    setPartname(a);
    setName(b);
    setVolume(c);
    setPrice(d);
}
    void Invoice::setPartname(string a)
    {
       partname=a;
    }
    void Invoice::setName(string b)
    {
        name=b;
    }
    void Invoice::setVolume(int c)
    {
       if(c<0)
         volume=0;
        else
         volume=c;

    }
    void Invoice::setPrice(int d)
    {
        if(d<0)
            price=0;
        else
            price=d;
    }
    string Invoice::getPartname()const
    {
        return partname;
    }
    string Invoice::getName()const
    {
        return name;
    }
    int Invoice::getVolume()const
    {
        return volume;
    }
    int Invoice::getPrice()const
    {
        return price;
    }

    int Invoice::getInvoiceAmount()const
    {
        int s=0;
        s=volume*price;
        return s;
    }
