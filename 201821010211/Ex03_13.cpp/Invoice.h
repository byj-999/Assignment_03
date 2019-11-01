#include <string>
using namespace std;// homework1: Invoice.h
// Definition of Invoice class.

class Invoice
{
public:
   Invoice( string,string,int,int );
   void setPartNumber( string );//sets the partNumber
   string getPartNumber()const;//gets the partNumber
   void setPartDescription( string );
   string getPartDescription()const;
   void setSales(int);
   int getSales()const;
   void setUnitPrice(int);
   int getUnitPrice()const;
   int getInvoiceAmount();
private:
   string partNumber;
   string partDescription;
   int sales;
   int unitPrice;//partNumber,partDescription,sales,unitPrice for this Invoice
}; // end class Invoice
