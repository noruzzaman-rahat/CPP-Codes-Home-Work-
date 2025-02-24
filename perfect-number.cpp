#include<iostream>
#include<math.h>
using namespace std;

class perfect
{
public:
    void perfect_number()
    {
        int n;
        cin>>n;

        int sum = 1;

        for( int i = 2; i<=sqrt(n); i++)
        {
            if(n%i == 0)
                sum = sum+i+n/i;
        }
        if(sum==n)
        {
            cout<< n << " is s perfect number"<<endl;
        }
        else{
            cout<< n <<" is not a perfect number"<<endl;
        }
    }

};
int main()
{
    perfect obj;
    obj.perfect_number();

    return 0;
}
