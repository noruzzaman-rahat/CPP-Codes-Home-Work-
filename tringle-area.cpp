#include<iostream>
using namespace std;

class tringle
{
public:
    double height, base;
    double compute_area()
    {
        return 0.5*height*base;
    }
};
int main ()
{
    tringle obj;
    obj.height=15;
    obj.base=3;
    cout<< "Area of Tringle is: "<<obj.compute_area()<<endl;

    return 0;
}
