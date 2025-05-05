#include<iostream>
using namespace std;

class Bank
{
private:
    int BankID;
    string BankName;
    string Location;
    public:
        Bank(int x, string y)
        {
            BankID = x;

            BankName= y;
        }
        void Print_Values()
        {
            cout<<"Bank_ID: "<<BankID<<endl;
            cout<<"BankName : "<<BankName<<endl;
        }

};
class Customer: public Bank
{
private:
    int CustomerID;
    double Amount;
public:

    Customer(int a, double b): Bank(120, "Dhaka Bank")
    {
        CustomerID = a;
        Amount = b;
    }
    void Print_Values2()
    {
        cout<<"CUSOTMER ID: "<<CustomerID<<endl;
        cout<<"Amount: "<<Amount<<endl;
    }
};
int main()
{
  Customer obj(150, 105000);
  obj.Print_Values();
  obj.Print_Values2();
}

