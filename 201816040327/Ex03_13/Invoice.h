#include <iostream>
#include "Invoice.h"
using namespace std;

class Invoice
//constructor
{
//initialize
public:

    Invoice::Invoice (string num, string info, int amount, int price);

    //functions
    void Invoice::setnum0(string num);
    string  Invoice::getnum0();
    void Invoice::setinfo0(string info);
    string  Invoice::getinfo0();

    //return
    void Invoice::setamount0(string amount);
    string  Invoice::getamount0();
    void Invoice::setprice0(string price);
    string  Invoice::getprice0();

private:
    string num;
    string info;
    int amount;
    int price;

};
//end class
