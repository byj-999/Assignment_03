#include <string> // program uses C++ standard string class
using namespace std;

// Invoice class definition
class Invoice
{
public:

   Invoice( string, string, int, int ); // constructor initializes number deprice amount and price

   void setNumber( string );
   string getNumber();

   void setDescribe( string );
   string getDescribe();

   void setAmount( int );
   int getAmount();

   void setPrice( int );
   int getPrice();

   int getInvoiceAmount();

   private:
    string Number;
    string Describe;
    int Amount;
    int Price;
}; // end class Invoice
