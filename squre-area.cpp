#include<iostream>
using namespace std;

class squre
{
public:
    double length;
    double compute_area()
    {
        return length*length;
    }
};
int main ()
{
    squre obj;
    obj.length=10;

    cout<< "Area of Squre is: "<<obj.compute_area()<<endl;

    return 0;
}

