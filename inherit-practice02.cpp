#include<iostream>
using namespace std;

class CPP
{
private:
    int Invention_Year;
    string Invented_country;
public:
    CPP(int y, string c)
    {
        Invention_Year = y;
        Invented_country = c;

        cout<<Invention_Year<<endl;
        cout<<Invented_country<<endl;
    }
};
class PYTHON
{
private:
    int Invention_Year;
    string Invented_country;
public:
    PYTHON(int y, string c)
    {
        Invention_Year = y;
        Invented_country = c;

        cout<<Invention_Year<<endl;
        cout<<Invented_country<<endl;
    }

};
class JAVA: public CPP, public PYTHON
{
    private:
        int Invention_Year;
        string Invented_country;
public:
    JAVA(int y, string c):CPP(123,"abc"),PYTHON(456,"xyz")

    {
        Invention_Year = y;
        Invented_country = c;

        cout<<Invention_Year<<endl;
        cout<<Invented_country<<endl;
    }
};
int main()
{
    JAVA obj(2002,"America");

    return 0;
}

