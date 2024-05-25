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
    Derieved(int i,int j,int k,int l):Base(k,l)
    {
        cout<<"Inside Derieved constructor\n";
        a=i;
        b=j;
        
    }
};

int main()
{
    cout<<"Inside Main \n";
    
    Base dobj(10,20,30,40);
    cout<<dobj.x<<endl;
    cout<<dobj.y<<endl;
    cout<<dobj.a<<endl;
    cout<<dobj.b<<endl;

    

    return 0;
}