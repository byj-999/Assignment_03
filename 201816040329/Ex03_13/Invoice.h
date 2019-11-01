class Invoice
{
public:
     Invoice(string,string,int,int);
      void setPID(string);
      string getPID();
      void setPDIS(string);
      string getPDIS();
      void setSalenum(int);
      int getSalenum();
      void setSaleprice(int);
      int getSaleprice();
      int getInvoiceAmount(int,int);
      void displayInvoice();
private:
    string PID;
    string PDIS;
    int Salenum;
    int Saleprice;
};
