#include<string>

using namespace std;

class Invoice
{

public:
    Invoice( string number,string description,int sum,int price);
    void setnumber(string number);
    string getnumber();
    void setdescription(string description);
    string getdescription();
    void setsum(int sum);
    int getsum();
    void setprice(int price);
    int getprice();
    int getInvoiceAmount(int buy);

private:
    string numberdata;
    string descriptiondata;
    int sumdata;
    int pricedata;

};
