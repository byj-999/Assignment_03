#include <iostream>
#include "Invoice.h"
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

Invoice::Invoice(string partNumbery,string partDescriptiony,int soldAmounty,int unitPricey)
{
	setPartNumber(partNumbery);
	setPartDescription(partDescriptiony);
	setSoldAmount(soldAmounty);
	setUnitPrice(unitPricey);
}
void Invoice::setPartNumber(string partNumbery)
{
	partNumber=partNumbery;
}
void Invoice::setPartDescription(string partDescriptiony)
{
	partDescription=partDescriptiony;
}
void Invoice::setSoldAmount(int soldAmounty)
{
	if(soldAmounty<0)
	soldAmount=0;
	else
	soldAmount=soldAmounty;
}
void Invoice::setUnitPrice(int unitPricey)
{
	if(unitPricey<0)
	unitPrice=0;
	else
	unitPrice=unitPricey;
}
string Invoice::getPartNumber()
{
	return partNumber;
}
string Invoice::getPartDescription()
{
	return partDescription;
}
int Invoice::getSoldAmount()
{
	return soldAmount;
}
int Invoice::getUnitPrice()
{
	return unitPrice;
}
int Invoice::getInvoiceAmount()
{
	return getSoldAmount()*getUnitPrice();
}
