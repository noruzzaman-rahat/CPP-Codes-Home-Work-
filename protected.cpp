#include<iostream>
using namespace std;

class parent
{
protected:
    string u_name;
};
class child : public parent
{
public:
    void setName(string Uni_Name)
    {
        u_name = Uni_Name;
    }
    void displayName()
    {
        cout<< "Uni Name is: "<< u_name << endl;
    }
};
int main ()
{
    child obj;
    obj.setName("State University Of Bangladesh");
    obj.displayName();
    return 0;
}
