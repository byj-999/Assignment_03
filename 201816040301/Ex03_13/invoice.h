#include <string>
using namespace std;
class Invoice
{
public:
    Invoice(string,string,int,int);  
    void setInvoiceId(string);    
    string getInvoiceId();        
    void setInvoiceDescription(string); 
    string getInvoiceDescription();       
    void setInvoiceSales(int);          
    int getInvoiceSales();               
    void setInvoicePrince(int);      
    int getInvoicePrince();            
    int getInvoiceAmount();            
    void displayMessage();        
private:
    string InvoiceId;           
    string InvoiceDescription;    
    int InvoiceSales;            
    int InvoicePrince;         
};
