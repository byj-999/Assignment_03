//Invoice class member-function definitions
#include <iostream>
using namespace std;

#include "Invoice.h" //Invoice class definition

Invoice::Invoice(string Id,string Description,int Amount,int Price)
{
    setId(Id);//initializes id
    setDescription(Description);//initializes description
    setAmount(Amount);//initialize amount
    setPrice(Price);//initialize price
}//end Invoice constructor

//function to set Id
void Invoice::setId(string id)
{
    Id=id;//store the id
}//end function setId

//function  to retrieve id
string Invoice::getId()
{
    return Id;
}//end function getId

//function to set the description
void Invoice::setDescription(string description)
{
    Description=description;//store the description
}//end function setDescription

//function to retrieve description
string Invoice::getDescription()
{
    return Description;
}//end function getDescription

//function to set the amount
void Invoice::setAmount(int amount)
{
    if(amount>0)//Determine if your amount is positive
        Amount=amount;//store the amount
    else
        Amount=0;//otherwise,the amount is 0
}//end function setAmount

//function to retrieve amount
int Invoice::getAmount()
{
    return Amount;
}//end function get amount

//function to set price
void Invoice::setPrice(int price)
{
    if(price>0)//Determine if your price is positive
        Price=price;//store the price
    else
        Price=0;//otherwise,the price is 0
}//end the function set price

//function to retrieve price
int Invoice::getPrice()
{
    return Price;
}//end function get price

//function for the amount multiply the price
int Invoice::getInvoiceAmount()
{
    return getAmount()*getPrice();
}//end function getInvoiceAmount

