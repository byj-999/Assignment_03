#include <iostream>
#include "Invoice.h"
using namespace std;

//constructor
//four types of information
Invoice::Invoice (string num, string info, int amount, int price);
{

}
//initialize

//four functions
//num's function
void Invoice::setnum0(string num)
{
    num0 = num;
}

//num's return
string  Invoice::getnum0()
{
    return num0;
}

//info's function
void Invoice::setinfo0(string info)
{
    info0 = info;
}

//info's return
string  Invoice::getinfo0()
{
    return info0;
}

//amount's function
void Invoice::setamount0(string amount)
{
    amount0 = amount;
}

//amount's return
string  Invoice::getamount0()
{
    return amount0;
}

//price's function
void Invoice::setprice0(string price)
{
    price0 = price;
}

//price's return
string  Invoice::getprice0()
{
    return price0;
}

//output information
void Invoice::displayMessage()
{

}
//end
