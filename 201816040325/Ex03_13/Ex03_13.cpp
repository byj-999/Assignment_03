#include <iostream>
using namespace std;

#include "Invoice.h"

int main()
{
    Invoice invoice1("N01","screws",300,12);
    cout<<"component number:         "<<invoice1.getCpNumber()<<endl;//输出零件号
    cout<<"component description:    "<<invoice1.getCpDescription()<<endl;//输出零件描述
    cout<<"goods amount:             "<<invoice1.getGsAmount()<<endl;//输出商品售出量
    cout<<"goods price:              "<<"$"<<invoice1.getGsPrice()<<endl;//输出商品单价
    cout<<"invoice amount:           "<<"$"<<invoice1.getInvoiceAmount()<<endl;//输出发票额

    return 0;
}
