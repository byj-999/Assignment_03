#include <string> // program uses C++ standard string class
using namespace std;

// Invoice class definition
class Invoice
{
 public:
    Invoice(string,string,int,int);//Declare a constructor that has one parameter for each data member
    void setinvoicepno(string);//Declare a set method for the invoice's part number
    string getinvoicepno();//Declare a get method for the invoice's part number
    void setinvoicepd(string);//Declare a set method for the invoice's part description
    string getinvoicepd();//Declare a get method for the invoice's part description
    void setinvoicesv(int);//Declare a set method for the invoice's Commodity output
    int  getinvoicesv();//Declare a get method for the invoice's Commodity output
    void setinvoiceip(int);//Declare a set method for the invoice's item pricing
    int  getinvoiceip();//Declare a get method for the invoice's item pricing
    int  getInvoiceAmount(int,int);//Declare a get method for the invoice's invoice amount
private:
    string invoicepno;//Declare a string data member for the invoice's part number
    string invoicepd;//Declare a string data member for the part description
    int    invoicesv;//Declare a int data member for the Commodity output
    int    invoiceip;//Declare a int data member for the item pricing

};
