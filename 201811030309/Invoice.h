#include <string>

class Invoice
{
public:

    //create a constructor to receiving 4 parameter
    Invoice( std::string, std::string, int, int);

    //create 4 function to initialize the data member
    void setid(std::string);
    void setname(std::string);
    void setprice(int);
    void setamount(int);

    //return 4 function to amend the data member
    std::string getid() const;
    std::string getname() const;
    int getprice() const;
    int getamount() const;

    int displayMessage() const;

    //create 4 data member
private:
    std::string id;
    std::string name;
    int price;
    int amount;

};
