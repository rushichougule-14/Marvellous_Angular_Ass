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

    virtual ~Base()                                //without writing of virtual keyword means not calling to destructor of pointed obj (i.e is derieved destructor)
                                            // writing the virtual to base Destructor keyword means calling the all constructor and destructor when obj created by upcasting 
    {
        cout<<"Base Destructor\n";
    }

};

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

    Base *dp = new Derieved;
    
    //Derieved bobj;

    cout<<"Size of base :"<<sizeof(Base)<<"\n";
    cout<<"Size of Derieved :"<<sizeof(Derieved)<<"\n";

    delete dp;

    return 0;
}