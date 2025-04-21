#include<iostream>
using namespace std;

class sum
{
public:
    void check()
    {
        int x;
        int even = 0;
        int odd = 0;
        cin>>x;

        for(int i = 1; i<=x; i++)
        {
            if(i%2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        cout<<"Total even number = "<<even<<" "<<endl;
        cout<<"Total odd number = "<<odd<<" "<<endl;
    }
};

int main()
{
    sum obj;
    obj.check();

    return 0;
}
