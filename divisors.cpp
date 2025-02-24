#include<iostream>
#include<math.h>
using namespace std;

class divisors
{
public:
    void check_divi()
    {
        int n;
        cin>>n;

        for(int i = 1; i<=sqrt(n); i++)
        {
            if(n%i == 0)
            {
                cout<< i << " "<< n/i<< " "<<endl;
            }
        }
    }
};
int main()
{
    divisors obj;
    obj.check_divi();

    return 0;
}
