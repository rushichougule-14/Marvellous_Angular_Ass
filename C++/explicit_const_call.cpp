#include <iostream>

using namespace std;

class Base 
{
    public:
    int x,y;
    Base (int a,int b)
    {
        cout<<"Base Constructor\n";
        x=a;
        y=b;
        
    }
};

class Derieved :public Base
{
    public:
    int a,b;
    Derieved (int a,int b,int k,int l):Base(k,l)
    {
        cout<<"Inside Derieved constructor\n";
        a=k;
        b=l;
        
    }
};



int main()
{
    cout<<"Inside Main \n";
    
    Derieved dobj(10,20,30,40);
    

    return 0;
}