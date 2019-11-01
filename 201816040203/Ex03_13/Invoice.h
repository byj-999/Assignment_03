#include<string>
using namespace std;
class Invoice
{
public:
    Invoice(string,string,int,int);
    void setA(string);
    string getA();
    void setB(string);
    string getB();
    void setC(int);
    int getC();
    void setD(int);
    int getD();
    int getInvoiceAmount(int,int);
private:
    string A;
    string B;
    int C;
    int D;

};
