#include<iostream>
using namespace std;

class Demo
{
    public:
    int no1;
    int no2;

    Demo()
    {
        cout<<"Inside constructor\n";

        int no1=5;
        int no2=10;
    }

    ~Demo()
    {
        cout<<"Inside Destructor\n";
    }

    void fun()
    {
        cout<<"Inside fun()\n";
    }

    void gun()
    {
        cout<<"Inside gun()\n";
    }
};


int main()
{
    cout<<"Inside Main\n";

    Demo obj1;
    Demo obj2;

    obj1.fun();
    obj2.fun();

    return 0;

    return 0;
}