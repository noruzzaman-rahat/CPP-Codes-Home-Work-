#include<iostream>
using namespace std;

class SUB {
public:
    int num1 = 100;
private:
    int num2 = 200;
protected:
    int num3 = 300;
};
class CSE:public SUB
{
public:
    void print()
    {
        num3 = 123456789;
        cout<<num3<<endl;
    }
};
int main()
{
    CSE obj;
    obj.print();
    return 0;
}
