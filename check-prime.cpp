#include<iostream>
using namespace std;

class prime
{
public:

    void check()
    {
        int check = 1;
        int n;
        cin>>n;
        for(int i = 2; i<n; i++)
        {
            if(n%i == 0)
            {
                check = 0;
                cout<<"Not a prime number"<<endl;
                break;
            }
        }
        if(check == 1)
        {
            cout<<"Prime number"<<endl;
        }
    }
};
int main()
{
    prime obj;
    obj.check();

    return 0;
}

