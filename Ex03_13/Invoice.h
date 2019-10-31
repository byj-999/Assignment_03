
//Invoice.h

class Invoice
{
public:
    Invoice(string ,string ,int ,int );//初始化数据成员
    void setCpNumber(string );//设置零件号的值
    string getCpNumber();//读取零件号
    void setCpDescription(string );//设置零件描述
    string getCpDescription();//读取零件描述
    void setGsAmount(int );//设置商品售出量
    int getGsAmount();//读取商品售出量
    void setGsPrice(int );//设置商品单价
    int getGsPrice();//读取商品单价
    int getInvoiceAmount();//读取发票额
private:
    string cpNumber;//零件号
    string cpDescription;//零件描述
    int gsAmount;//商品售出量
    int gsPrice;//商品单价
};
