#include <string> // 
using namespace std;


class Invoice
{
public:
         Invoice( string, string, int, int); //初始化四个数据
         void  setpart( string lingjian);
         string  getpart();
         void  setdescribe( string miaoshu);
         string  getdescribe();
         void  setsale( int shouchu);
         int getsale();
         void setpress( int danjia);
         int getpress(); // 四个数据set 和 get 函数的实现
         int InvoiceAmount(int,int) ;// 数据的输出

private:
        string lingjian;
        string miaoshu;
        int shouchu;
        int danjia; // 四个隐形变量

};
