#include <string> // program uses C++ standard string class
using namespace std;
// Invoice class definition
class Invoice
{
public:
    // constructor initializes partNumber,partDescription,saleNumber,unitPrice
   Invoice(string,string,int,int);
   string getPartNumber(); // function to get the part number
   void setPartNumber(string);// function to set the part number

   string getPartDescription();// function to get the part description
   void setPartDescription(string);// function to set the part description
   int getSaleNumber();// function to get the sale number
   void setSaleNumber(int);// function to set the sale number
   int getUnitPrice();// function to get the unit price
   void setUnitPrice(int);// function to set the unit price
   int getInvoiceAmount(); // return the invoice account
private:
   string partNumber; // data member that part number
   string partDescription;// data member that part description
   int saleNumber;// data member that sale number
   int unitPrice;// data member that unit price
}; // end class Invoice
