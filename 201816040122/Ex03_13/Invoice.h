
#include <string>
using namespace std;

class Invoice
{
public:
    explicit Invoice(string="null",string="null",int=0,int=0);//构建构造函数进行初始化
    void setInvoice(string,string,int,int);                   
    void setPartname(string);
    void setName(string);
    void setVolume(int);
    void setPrice(int);
    string getPartname()const;
    string getName()const;
    int getVolume()const;
    int getPrice()const;
    int getInvoiceAmount()const;
private:
    string partname;
    string name;
    int volume;
    int price;
};
