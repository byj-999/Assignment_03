#include <iostream>
using namespace std;

#include "Invoice.h"

    Invoice::Invoice(string number,string description,int amount,int price)//初始化数据成员
    :cpNumber(number),cpDescription(description),gsAmount(amount),gsPrice(price)
    {

    }
    void Invoice::setCpNumber(string number)//设置零件号的值
    {
        cpNumber=number;
    }
    string Invoice::getCpNumber()//读取零件号
    {
        return cpNumber;
    }
    void Invoice::setCpDescription(string description)//设置零件描述
    {
        cpDescription=description;
    }
    string Invoice::getCpDescription()//读取零件描述
    {
        return cpDescription;
    }
    void Invoice::setGsAmount(int amount)//设置商品售出量
    {
        gsAmount=amount;
    }
    int Invoice::getGsAmount()//读取商品售出量
    {
        return gsAmount;
    }
    void Invoice::setGsPrice(int price)//设置商品单价
    {
        gsPrice=price;
    }
    int Invoice::getGsPrice()//读取商品单价
    {
        return gsPrice;
    }
    int Invoice::getInvoiceAmount()//读取发票额
    {
        if(gsAmount==0||gsPrice<0)
        {
            return 0;
        }
        else
        {
            return gsAmount*gsPrice;
        }
    }
