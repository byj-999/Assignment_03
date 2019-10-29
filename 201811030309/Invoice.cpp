#include <iostream>
#include "Invoice.h"

using namespace std;

//create a constructor to receiving 4 parameter and initialize them
Invoice::Invoice(string gid, string gname, int gprice, int gamount)
    :id(gid), name(gname), price(gprice), amount(gamount)
    {

    }

//create 4 function to initialize the data member
void Invoice::setid(string gid)
{
    id=gid;
}
void Invoice::setname(string gname)
{
    name=gname;
}void Invoice::setprice(int gprice)
{
    if(gprice>0)
    price=gprice;
    else
        price=0;
}void Invoice::setamount(int gamount)
{
    if(gamount>0)
    amount=gamount;
    else
        amount=0;
}

//return 4 function to amend the data member
string Invoice::getid() const
{
    return id;
}
string Invoice::getname() const
{
    return name;
}
int Invoice::getprice() const
{
    if(price>0)
    return price;
    else
        return 0;
}
int Invoice::getamount() const
{
    if(amount>0)
    return amount;
    else
        return 0;
}

//return the all price
int Invoice::displayMessage() const
{
    return getprice()*getamount();
}
