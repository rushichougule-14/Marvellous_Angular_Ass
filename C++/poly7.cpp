#include<iostream>
using namespace std;

class Base
{
    public:
    int x,y;

    Base()
    {
        cout<<"Base Constructor\n";
    }

    virtual ~Base() =0;  

    void fun()
    {
        cout<<"Base fun\n";
    }     
};

Base ::~Base()
{

}

class Derieved :public Base
{
    public:
    int i,j;

    Derieved()
    {
        cout<<"Derieved Constructor\n";
    }

    ~Derieved()
    {
        cout<<"Derieved Destructor\n";
    }
};

int main()
{
    //Base *dp=new Derieved ();

    //Base *dp = new Derieved;
    
    ///Base bobj;
    Derieved dobj;
    dobj.fun();


   // cout<<"Size of base :"<<sizeof(Base)<<"\n";
    //cout<<"Size of Derieved :"<<sizeof(Derieved)<<"\n";

   // delete dp;

    return 0;
}