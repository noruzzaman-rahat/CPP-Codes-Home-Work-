#include<iostream>
using namespace std;

class even
{
public:
    void check()
    {
        int x;
        cin>>x;

        for(int i = 2; i<=x; i=i+2)
        {
            cout<<i<<endl;
        }
    }
};
int main()
{
    even obj;
    obj.check();

    return 0;
}
