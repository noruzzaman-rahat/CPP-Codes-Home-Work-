#include<iostream>
using namespace std;

class Ascci
{
public:
    void check()
    {
        string s;
        cin>>s;

        int sum = 0;

        for(int i=0; i<s.length(); i++)
        {
            char c = s[i];
            int n = int(c);

            sum = sum+n;
        }
        cout<<sum<<endl;
    }
};
int main()
{
    Ascci obj;
    obj.check();

    return 0;
}
