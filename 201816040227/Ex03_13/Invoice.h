#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED



#endif // INVOICE_H_INCLUDED
#include <string> // program uses C++ standard string class
using namespace std;

// Invoice class definition
class Invoice
{
public:
   Invoice (string, string, int, int);/* Declare a constructor that has one parameter for each data member */
   void setPartNumber(string);/* Declare a set method for the part number */
   string getPartNumber();/* Declare a get method for the part number */
   void setPartDescription( string);/* Declare a set method for the part description */
   string getPartDescription();/* Declare a get method for the part description  */
   void setSaleVolume( int);/* Declare a set method for the sale volume */
   int getSaleVolume();/* Declare a get method for the sale volume */
   void setUnitPrice( int);/* Declare a set method for the unit price */
   int getUnitPrice();/* Declare a get method for the unit price */
   void getInvoiceAmount();
private:
   string partNumber;/* Declare a string data member for the employee's first name */
   string partDescription;/* Declare a string data member for the employee's last name */
   int saleVolume;/* Declare an int data member for the saleVolume */
   int unitPrice;/* Declare an int data member for the unitPrice */
   int invoiceAmount;
}; // end class Invoice
