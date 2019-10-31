#include <iostream>
using namespace std;

#include "Invoice.h" // Invoice class definition
Invoice::Invoice( string PN , string PD , int SV , int UP)// Define the constructor.
{
    setPartNumber(PN);
    setPartDescription(PD);
    setSaleVolume(SV);
    setUnitPrice(UP);

}

void Invoice::setPartNumber( string PN )
{
    partNumber = PN;
} /* Define a set function for the PartNumber data member. */
string Invoice::getPartNumber()
{
   return partNumber;
} /* Define a get function for the PartNumber data member. */

void Invoice::setPartDescription( string PD )
{
    partDescription = PD;
} /* Define a set function for the PartDescription data member. */
string Invoice::getPartDescription()
{
   return partDescription;
} /* Define a get function for the PartDescription data member. */

void Invoice::setSaleVolume( int SV )
{
    saleVolume = SV;
} /* Define a set function for the SaleVolume data member. */

int Invoice::getSaleVolume()
{
    return saleVolume;
}/* Define a get function for the SaleVolume data member. */

void Invoice::setUnitPrice( int UP )
{
    unitPrice = UP;
} /* Define a set function for the UnitPrice data member. */

int Invoice::getUnitPrice()
{
    return unitPrice;
}/* Define a get function for the UnitPrice data member. */

void Invoice::getInvoiceAmount()
{
    if( saleVolume<0 )
    {
        saleVolume =0;
    }

    if( unitPrice<0)
    {
        unitPrice =0;
    }

    invoiceAmount = saleVolume * unitPrice ;

    cout<<invoiceAmount<<endl;
}
/* Define a get function for the invoiceAmount data member. */
