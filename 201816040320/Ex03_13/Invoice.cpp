#include <iostream>
using namespace std;
#include "Invoice.h"

Invoice::Invoice(string name1, string name2, int saleamount, int price)
{
    setPN(name1);
    setPartDescription(name2);
    setSaleAmount(saleamount);
    setPrice(price);
}
//构造函数
void Invoice::setPN(string name)
{
    PN=name;
}
//修改商品零件号
string Invoice::getPN()
{
    return PN;
}
//获取商品零件号
void Invoice::setPartDescription(string name)
{
    PartDescription=name;
}
//修改商品描述
string Invoice::getPartDescription()
{
    return PartDescription;
}
//获取商品描述
void Invoice::setSaleAmount(int n)
{
    if(n<0)
        SaleAmount = 0;
    else
        SaleAmount = n;
}
//修改售出量
int Invoice::getSaleAmount()
{
    return SaleAmount;
}
//获取售出量
void Invoice::setPrice(int n)
{
    if(n<0)
        Price = 0;
    else
        Price = n;
}
//修改商品价格
int Invoice::getPrice()
{
    return Price;
}
//获取商品价格
int Invoice::getInvoiceAmount()
{
    return getSaleAmount()*getPrice();
}
//计算发票总额
