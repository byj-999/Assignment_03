#include <iostream>
using namespace std;

#include "Invoice.h" // include definition of class Invoice

// function main begins program execution
int main()
{
   Invoice invoice( "x"," connect m and n", 20 , 10);/* Create one Invoice object  */

   cout << "PartNumber : " <<invoice.getPartNumber()<<endl<<"PartDescription : "<<invoice.getPartDescription()<<endl<< "SaleVolume : "<<invoice.getSaleVolume ()<<endl<< "UnitPrice : "<<invoice.getUnitPrice ()<< endl;

   cout << "InvoiceAmount : ";
   invoice.getInvoiceAmount();



} // end main
