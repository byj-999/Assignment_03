
#include <string>
using namespace std;
//Invoice class definition
class Invoice
{
public:
    //Declare a constructor that has one parameter for each data member
    Invoice(string,string,int,int);
    //Declare a set method for the id
    void setId( string );//function to set id
    //Declare a get method for the id
    string getId();//function to retrieve id
    //Declare a set method for description
    void setDescription( string );//function to set description
    //Declare a get method for the description
    string getDescription();//function to retrieve description
    void setAmount( int );//function to set the amount sold
    int getAmount();//function to retrieve the amount sold
    void setPrice( int );//function to set price
    int getPrice();//function to retrieve the price
    int getInvoiceAmount();//calculate the amount multiply the price
private:
    string Id;//id for Invoice
    string Description;//description for Invoice
    int Amount;//amount for Invoice
    int Price;//price for Invoice
};//end class Invoice
