#include <string> // program uses C++ standard string class
using namespace std;


class Date
{
public:
         Date  ( int, int, int); //初始化三个变量 
         void  setyear( int nian); // 输入年份
         int  getyear();
         void  setmonth( int month); // 输入月份
         int  getmonth();
         void  setday( int day); // 输入日数
         int getday();
         void displaydate();// 输出年月日

private:
        int year;
        int month;
        int day; 
};
