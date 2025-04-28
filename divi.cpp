#include<iostream>
#include<math.h>
using namespace std;

class divi
{
public:
    void check()
    {
        int n;
        cin>>n;
        for(int i=1; i<=sqrt(n); i++)
        {
            if(n%i== 0)

            {
            if(i*i == n)
            {
                cout<<i<<endl;
            }
            else
            {
                cout<<i<<" "<<n/i<<endl;
            }
            }
        }
    }
};
int main()
{
    divi obj;
    obj.check();

    return 0;
}
