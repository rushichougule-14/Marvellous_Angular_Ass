#include <iostream>
using namespace std;

class Base
{
    public:
    int x,y;
    virtual void fun()          // 1000
    {   cout<<"Base fun\n";}
    virtual void gun()        // 2000
    {   cout<<"Base gun\n";}
    virtual void sun()=0;         //3000
};
class Derived : public Base
{
public:
    int i,j;
    void gun()      // 4000
    {   cout<<"Derived gun\n"; }
    virtual void run()       //6000
    {   cout<<"Derived run\n"; }
    void Add()
    {   cout<<"Derived add\n";}

    void sun()
    {
        cout<<"Derived Sun \n";
    }
};

int main()
{
    cout<<"Size of Base : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
    Base *bp = new Derived();
    bp->fun();      // CALL 1000
    bp->gun();      // CALL 2000    ??????????
    bp->sun();      // CALL 3000    ??????????
    return 0;
}
