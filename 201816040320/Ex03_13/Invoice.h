#include <string>
using namespace std;

//Invoice class definition
class Invoice
{
private:
    string PN;
    string PartDescription;
    int SaleAmount;
    int Price;
public:
    Invoice(string ,string, int, int);//构造函数声明。
    void setPN(string);//修改商品零件号。
    string getPN();//获取商品零件号。
    void setPartDescription(string);//修改商品描述。
    string getPartDescription();//获取商品描述。
    void setSaleAmount(int);//修改售出量。
    int getSaleAmount();//获取售出量。
    void setPrice(int);//修改商品价格。
    int getPrice();//获取商品价格。
    int getInvoiceAmount();//计算发票总额。
};
